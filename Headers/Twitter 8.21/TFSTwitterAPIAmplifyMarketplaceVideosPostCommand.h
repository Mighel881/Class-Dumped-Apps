//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSArray, NSString;

@interface TFSTwitterAPIAmplifyMarketplaceVideosPostCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    _Bool _monetize;
    NSString *_mediaID;
    NSArray *_videoCategories;
    NSArray *_advertiserBlacklist;
    NSArray *_monetizationCategoryBlacklist;
    NSArray *_adsCategoryBlacklist;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *adsCategoryBlacklist; // @synthesize adsCategoryBlacklist=_adsCategoryBlacklist;
@property(retain, nonatomic) NSArray *monetizationCategoryBlacklist; // @synthesize monetizationCategoryBlacklist=_monetizationCategoryBlacklist;
@property(retain, nonatomic) NSArray *advertiserBlacklist; // @synthesize advertiserBlacklist=_advertiserBlacklist;
@property(retain, nonatomic) NSArray *videoCategories; // @synthesize videoCategories=_videoCategories;
@property(nonatomic) _Bool monetize; // @synthesize monetize=_monetize;
@property(retain, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
- (id)request;
- (id)initWithAccountID:(id)arg1 mediaID:(id)arg2 monetize:(_Bool)arg3 videoCategories:(id)arg4 advertiserBlacklist:(id)arg5 monetizationCategoryBlacklist:(id)arg6 adsCategoryBlacklist:(id)arg7 context:(id)arg8 source:(unsigned long long)arg9 responseModelBuilder:(id)arg10 completionBlock:(CDUnknownBlockType)arg11;

@end

