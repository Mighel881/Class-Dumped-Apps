//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MPVASTModel.h"

@class NSArray, NSString;

@interface MPVASTResponse : MPVASTModel
{
    NSArray *_ads;
    NSArray *_errorURLs;
    NSString *_version;
}

+ (id)modelMap;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSArray *errorURLs; // @synthesize errorURLs=_errorURLs;
@property(retain, nonatomic) NSArray *ads; // @synthesize ads=_ads;
- (void).cxx_destruct;

@end

