//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBSharedLinkAPIClientStoneSdkImpl : NSObject
{
    // Error parsing type: , name: userBaseClient
}

- (void).cxx_destruct;
- (id)init;
- (CDUnknownBlockType)revokeSharedLinkWithLink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)updateSharedLinkSettingsWithLink:(id)arg1 linkSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)listSharedLinksAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)createSharedLinkAtPath:(id)arg1 accessLevel:(long long)arg2 returnLinkIfExists:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)createSharedLinkAtPath:(id)arg1 withSettings:(id)arg2 returnLinkIfExists:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithUserBaseClient:(id)arg1;

@end
