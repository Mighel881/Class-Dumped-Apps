//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AWEOpenShareDelegate;

@interface AWEOpenShareManager : NSObject
{
    id <AWEOpenShareDelegate> _delegate;
}

@property(retain, nonatomic) id <AWEOpenShareDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)requestForJSONWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (void)didEnterAwemeFromThridAppShareWithThridAppKey:(id)arg1 shareParam:(id)arg2;
- (void)authorizeWithConsumerOAuthReq:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
