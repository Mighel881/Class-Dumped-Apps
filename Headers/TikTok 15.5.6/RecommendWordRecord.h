//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface RecommendWordRecord : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) _Bool hasGroupId; // @dynamic hasGroupId;
@property(nonatomic) _Bool hasSdkVersion; // @dynamic hasSdkVersion;
@property(nonatomic) _Bool hasWordsContent; // @dynamic hasWordsContent;
@property(nonatomic) _Bool hasWordsPosition; // @dynamic hasWordsPosition;
@property(nonatomic) _Bool hasWordsSource; // @dynamic hasWordsSource;
@property(nonatomic) long long sdkVersion; // @dynamic sdkVersion;
@property(copy, nonatomic) NSString *wordsContent; // @dynamic wordsContent;
@property(nonatomic) int wordsPosition; // @dynamic wordsPosition;
@property(copy, nonatomic) NSString *wordsSource; // @dynamic wordsSource;

@end
