//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/ObservableObject.h>

#import <RedditCore/BaseModel-Protocol.h>

@class NSString, NSURL;

@interface CommunityTag : ObservableObject <BaseModel>
{
    _Bool _isRecommended;
    NSString *_pk;
    NSString *_text;
    long long _type;
}

+ (id)keyPathsToObserveChanges;
@property(readonly, nonatomic) _Bool isRecommended; // @synthesize isRecommended=_isRecommended;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSURL *iconURL;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithGraphQLData:(id)arg1;
- (id)initWithPk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
