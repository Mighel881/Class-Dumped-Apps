//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol GDKPermissionsFetching <NSObject>
- (void)permissionsForItemWithId:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(GDKDomainAttributes *, NSArray *, NSError *))arg3;
- (void)permissionsForItemWithId:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 withRolesCompletion:(void (^)(GDKDomainAttributes *, NSArray *, NSError *, NSArray *))arg3;
@end

