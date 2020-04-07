//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGCachable-Protocol.h>

@class NSArray, NSDate, NSString;

@interface IBGSurveyObject : NSObject <IBGCachable>
{
    _Bool _isAnswered;
    _Bool _isCanceled;
    _Bool _isPaused;
    _Bool _isShowing;
    long long _dismissCount;
    NSDate *_dismissDate;
    long long _eventsIndex;
    NSString *_identifier;
    long long _numberOfSessionsSinceDismiss;
    long long _surveyOperator;
    NSString *_title;
    NSString *_token;
    long long _type;
    NSArray *_conditions;
    NSArray *_questions;
    NSArray *_surveyEvents;
}

@property(retain, nonatomic) NSArray *surveyEvents; // @synthesize surveyEvents=_surveyEvents;
@property(retain, nonatomic) NSArray *questions; // @synthesize questions=_questions;
@property(retain, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long surveyOperator; // @synthesize surveyOperator=_surveyOperator;
@property(nonatomic) long long numberOfSessionsSinceDismiss; // @synthesize numberOfSessionsSinceDismiss=_numberOfSessionsSinceDismiss;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(nonatomic) _Bool isAnswered; // @synthesize isAnswered=_isAnswered;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long eventsIndex; // @synthesize eventsIndex=_eventsIndex;
@property(copy, nonatomic) NSDate *dismissDate; // @synthesize dismissDate=_dismissDate;
@property(nonatomic) long long dismissCount; // @synthesize dismissCount=_dismissCount;
- (void).cxx_destruct;
- (id)oldSurveyId;
- (id)coderNameForSelector:(SEL)arg1;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
