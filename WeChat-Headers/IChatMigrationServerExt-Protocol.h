//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@protocol IChatMigrationServerExt <NSObject>

@optional
- (void)onMigrationServerAlertCode:(unsigned long long)arg1;
- (void)onMigrationServerTransferSpeed:(float)arg1;
- (void)onMigrationCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onMigrationServerNotifyCode:(unsigned long long)arg1;
- (void)onGetQRCodeImg:(UIImage *)arg1;
@end

