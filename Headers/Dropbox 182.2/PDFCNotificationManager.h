//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDFCNotificationManager : NSObject
{
    struct Handle<std::__1::shared_ptr<PDFC::NotificationManager>, std::__1::shared_ptr<PDFC::NotificationManager>> _cppRefHandle;
}

+ (void)sendTestNotification:(id)arg1 name:(id)arg2;
+ (void)unregisterCoreNotificationHandler:(id)arg1;
+ (void)registerCoreNotificationHandler:(id)arg1 coreNotificationHandler:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCpp:(const shared_ptr_c5493d21 *)arg1;

@end
