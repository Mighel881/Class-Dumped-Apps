//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterOnboardingSubtask.h>

@class NSString, TFSTwitterOnboardingNavigationLink, TFSTwitterOnboardingRichText;

@interface TFSTwitterOnboardingEnterPasswordSubtask : TFSTwitterOnboardingSubtask
{
    _Bool _skipPasswordValidation;
    NSString *_name;
    NSString *_email;
    NSString *_username;
    TFSTwitterOnboardingRichText *_primaryText;
    TFSTwitterOnboardingRichText *_secondaryText;
    NSString *_hint;
    TFSTwitterOnboardingNavigationLink *_nextLink;
    TFSTwitterOnboardingNavigationLink *_skipLink;
}

+ (long long)version;
+ (id)typeNames;
@property(readonly, nonatomic, getter=shouldSkipPasswordValidation) _Bool skipPasswordValidation; // @synthesize skipPasswordValidation=_skipPasswordValidation;
@property(readonly, nonatomic) TFSTwitterOnboardingNavigationLink *skipLink; // @synthesize skipLink=_skipLink;
@property(readonly, nonatomic) TFSTwitterOnboardingNavigationLink *nextLink; // @synthesize nextLink=_nextLink;
@property(readonly, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *primaryText; // @synthesize primaryText=_primaryText;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 backNavigationType:(long long)arg4 backNavigationLink:(id)arg5 error:(id *)arg6;

@end

