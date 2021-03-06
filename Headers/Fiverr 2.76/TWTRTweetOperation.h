//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TWTRAPIClient, TWTRCardConfiguration;

@interface TWTRTweetOperation : NSObject
{
    TWTRCardConfiguration *_initialCardConfiguration;
    TWTRAPIClient *_APIClient;
}

@property(readonly, nonatomic) TWTRAPIClient *APIClient; // @synthesize APIClient=_APIClient;
@property(readonly, nonatomic) TWTRCardConfiguration *initialCardConfiguration; // @synthesize initialCardConfiguration=_initialCardConfiguration;
- (void).cxx_destruct;
- (void)createTweetWithText:(id)arg1 cardConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createTweetWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)uploadImageFromConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)convertCardConfiguration:(CDUnknownBlockType)arg1;
- (id)initWithUserID:(id)arg1 cardConfiguration:(id)arg2;

@end

