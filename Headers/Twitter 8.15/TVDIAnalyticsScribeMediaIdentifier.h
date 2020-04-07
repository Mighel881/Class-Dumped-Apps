//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVDIAnalyticsScribe/NSCoding-Protocol.h>
#import <TVDIAnalyticsScribe/TBase-Protocol.h>

@class NSString, TVDIAnalyticsScribeAmplifyCardIdentifier, TVDIAnalyticsScribeMediaPlatformIdentifier, TVDIAnalyticsScribeScrubbedIdentifier, TVDIAnalyticsScribeUnknownIdentifier;

@interface TVDIAnalyticsScribeMediaIdentifier : NSObject <TBase, NSCoding>
{
    _Bool _mediaPlatformIdentifierIsSet;
    _Bool _amplifyCardIdentifierIsSet;
    _Bool _unknownIdentifierIsSet;
    _Bool _scrubbedIdentifierIsSet;
    TVDIAnalyticsScribeMediaPlatformIdentifier *_mediaPlatformIdentifier;
    TVDIAnalyticsScribeAmplifyCardIdentifier *_amplifyCardIdentifier;
    TVDIAnalyticsScribeUnknownIdentifier *_unknownIdentifier;
    TVDIAnalyticsScribeScrubbedIdentifier *_scrubbedIdentifier;
}

@property(readonly, nonatomic) _Bool scrubbedIdentifierIsSet; // @synthesize scrubbedIdentifierIsSet=_scrubbedIdentifierIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeScrubbedIdentifier *scrubbedIdentifier; // @synthesize scrubbedIdentifier=_scrubbedIdentifier;
@property(readonly, nonatomic) _Bool unknownIdentifierIsSet; // @synthesize unknownIdentifierIsSet=_unknownIdentifierIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeUnknownIdentifier *unknownIdentifier; // @synthesize unknownIdentifier=_unknownIdentifier;
@property(readonly, nonatomic) _Bool amplifyCardIdentifierIsSet; // @synthesize amplifyCardIdentifierIsSet=_amplifyCardIdentifierIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeAmplifyCardIdentifier *amplifyCardIdentifier; // @synthesize amplifyCardIdentifier=_amplifyCardIdentifier;
@property(readonly, nonatomic) _Bool mediaPlatformIdentifierIsSet; // @synthesize mediaPlatformIdentifierIsSet=_mediaPlatformIdentifierIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeMediaPlatformIdentifier *mediaPlatformIdentifier; // @synthesize mediaPlatformIdentifier=_mediaPlatformIdentifier;
- (void).cxx_destruct;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScrubbedIdentifier:(id)arg1;
- (id)initWithUnknownIdentifier:(id)arg1;
- (id)initWithAmplifyCardIdentifier:(id)arg1;
- (id)initWithMediaPlatformIdentifier:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
