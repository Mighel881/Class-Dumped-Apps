//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Charts/LineRadarChartRenderer.h>

@class _TtC6Charts14RadarChartView;

@interface _TtC6Charts18RadarChartRenderer : LineRadarChartRenderer
{
    // Error parsing type: , name: $__lazy_storage_$_accessibilityXLabels
    // Error parsing type: , name: chart
    // Error parsing type: , name: _webLineSegmentsBuffer
    // Error parsing type: , name: _highlightPointBuffer
}

- (void).cxx_destruct;
- (id)initWithAnimator:(id)arg1 viewPortHandler:(id)arg2;
- (void)drawHighlightedWithContext:(struct CGContext *)arg1 indices:(id)arg2;
- (void)drawWebWithContext:(struct CGContext *)arg1;
- (void)drawExtrasWithContext:(struct CGContext *)arg1;
- (void)drawValuesWithContext:(struct CGContext *)arg1;
- (void)drawDataWithContext:(struct CGContext *)arg1;
- (id)initWithChart:(id)arg1 animator:(id)arg2 viewPortHandler:(id)arg3;
@property(nonatomic) __weak _TtC6Charts14RadarChartView *chart; // @synthesize chart;

@end

