//
//  public.h
//  myZyxel
//
//  Created by line on 2017/6/2.
//  Copyright © 2017年 Zyxel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonCryptor.h>
#import <CommonCrypto/CommonKeyDerivation.h>
#include <CoreFoundation/CoreFoundation.h>
#include <Security/Security.h>
#import <AVFoundation/AVFoundation.h>
#import <sys/utsname.h>

#import "common.h"

#include <openssl/pem.h>
#include <openssl/ssl.h>
#include <openssl/rsa.h>
#include <openssl/evp.h>
#include <openssl/bio.h>
#include <openssl/err.h>

@interface public : NSObject
+ (NSDictionary *)parseQueryString:(NSString *)query;
+ (NSString *)base64_encode: (NSString *)token;
+ (NSString *)base64_decode: (NSString *)token;
//+ (NSString*)sha256:(NSString *)key length:(NSInteger) length;
+ (NSData *)aes_cbc_256:(NSData *)inData andIv:(NSString *)iv andkey:(NSData *)key andType: (CCOperation)coType;
+ (NSString *)sha256:(NSString *)input;
+ (NSString *)sha224:(NSString *)input;
+ (NSData *)hexToBytes:(NSString *)str;
+ (NSString*)getHexStringFromNSData:(NSData*)data;
+ (int8_t)getDeviceType;
+ (NSString *)checkErrorCode:(NSString *)code;
+ (NSString *)getServiceTime:(NSInteger)amount;
+ (NSString *)getExpiringTime: (NSInteger)day;
+ (BOOL)checkNetWorkConn;
+ (BOOL)refreshToken;
+ (NSString *)deviceModelName;
+ (BOOL)checkServiceStatusFromName:(NSString *)name action:(NSInteger)action;
+ (BOOL)checkServiceStatus:(NSString *)moduleCode action:(NSInteger)action;
+ (BOOL)checkSpecialStr:(NSString *)str;
+ (BOOL)checkTutoriaInfo:(NSString *)str;
+ (void)recordTutoriaInfo:(NSString *)str;
+ (NSString *) signMessage:(NSString *)privateKey and:(NSString *)plainText;
+ (NSString *)stringByAddingPercentEscapesForURLParameter:(NSString *)str;
+ (NSString *)getAppInfo;
+ (NSString *)getTimeStamp;
+ (NSString *)generateSign:(NSInteger)option andTimeStamp:(NSString *)timeStamp andInboxId:(NSString *)inboxId;
+ (NSString *)messageRange:(NSString *)action;
+ (BOOL)checkAppVerFromServerCompare;
+ (NSArray *)showFileList;

+ (void)set_access_token:(NSString *)input;
+ (NSString *)get_access_token;

+ (void)set_refresh_token:(NSString *)input;
+ (NSString *)get_refresh_token;

+ (void)set_access_key_id:(NSString *)input;
+ (NSString *)get_access_key_id;

+ (void)set_secret_access_key:(NSString *)input;
+ (NSString *)get_secret_access_key;

+ (void)set_device_token:(NSString *)input;
+ (NSString *)get_device_token;

+ (void)set_code:(NSString *)input;
+ (NSString *)get_code;
// for tutorial by account
+ (void)set_account_id:(NSString *)input;
+ (NSString *)get_account_id;

+ (void)set_user_account:(NSString *)input;
+ (NSString *)get_user_account;

+ (void)set_expired_count:(NSInteger)input;
+ (NSInteger)get_expired_count;

+ (void)set_update_status:(NSInteger)input;
+ (NSInteger)get_update_status;

+ (void)set_device_name:(NSMutableArray *)input;
+ (NSMutableArray *)get_device_name;

+ (void)set_device_mac_addr:(NSMutableArray *)input;
+ (NSMutableArray *)get_device_mac_addr;

+ (void)set_device_id:(NSMutableArray *)input;
+ (NSMutableArray *)get_device_id;

+ (void)set_device_services:(NSMutableArray *)input;
+ (NSMutableArray *)get_device_services;
// for notification
+ (void)set_user_id:(NSString *)input;
+ (NSString *)get_user_id;
// for notification
+ (void)set_pushUDID:(NSString *)input;
+ (NSString *)get_pushUDID;
@end
