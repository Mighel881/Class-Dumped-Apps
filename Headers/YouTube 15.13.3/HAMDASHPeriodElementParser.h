//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/HAMDASHBaseElementParser.h>

@class HAMDASHMPDSegmentIndexBuilder, HAMDASHPeriodBuilder, NSString;

@interface HAMDASHPeriodElementParser : HAMDASHBaseElementParser
{
    NSString *_initializationTemplate;
    HAMDASHPeriodBuilder *_builder;
    HAMDASHMPDSegmentIndexBuilder *_segmentIndexBuilder;
}

+ (id)createPeriodBuilder;
@property(retain, nonatomic) HAMDASHMPDSegmentIndexBuilder *segmentIndexBuilder; // @synthesize segmentIndexBuilder=_segmentIndexBuilder;
@property(readonly, nonatomic) HAMDASHPeriodBuilder *builder; // @synthesize builder=_builder;
- (void).cxx_destruct;
- (void)segmentListParserDidComplete:(id)arg1;
- (_Bool)endElementWithErrorDetails:(id)arg1;
- (_Bool)parseAttribute:(const char *)arg1 value:(const char *)arg2 valueLength:(unsigned long long)arg3;
- (id)startElementWithName:(const char *)arg1;
- (id)initWithFactory:(id)arg1;

@end
