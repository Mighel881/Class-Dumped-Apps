//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEAwemeModel, AWEGoodsEnterFullScreenRequest, NSDictionary, NSString;

@interface AWEECommerceEntranceRequest : NSObject
{
    long long _type;
    AWEAwemeModel *_aweme;
    NSString *_sourcePage;
    AWEGoodsEnterFullScreenRequest *_fullScreenRequest;
    NSString *_enterMethod;
    NSDictionary *_extraData;
}

@property(copy, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(copy, nonatomic) NSString *enterMethod; // @synthesize enterMethod=_enterMethod;
@property(retain, nonatomic) AWEGoodsEnterFullScreenRequest *fullScreenRequest; // @synthesize fullScreenRequest=_fullScreenRequest;
@property(copy, nonatomic) NSString *sourcePage; // @synthesize sourcePage=_sourcePage;
@property(retain, nonatomic) AWEAwemeModel *aweme; // @synthesize aweme=_aweme;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

