//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpotlight/CSSearchableItemAttributeSet.h>

@class NSDictionary, NSSet, NSUserActivity;

@interface BranchCSSearchableItemAttributeSet : CSSearchableItemAttributeSet
{
    _Bool _publiclyIndexable;
    NSDictionary *_params;
    NSSet *_keywords;
    NSUserActivity *_userActivity;
}

@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(nonatomic) _Bool publiclyIndexable; // @synthesize publiclyIndexable=_publiclyIndexable;
@property(retain, nonatomic) NSSet *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (void)indexContentWithUrl:(id)arg1 spotlightIdentifier:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)indexWithCallback:(CDUnknownBlockType)arg1;
- (void)setIdentifier:(id)arg1;
- (id)initWithContentType:(id)arg1;
- (id)init;

@end
