//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class AWSPinpointTargetingEventDimensions;

@interface AWSPinpointTargetingCampaignEventFilter : AWSModel
{
    AWSPinpointTargetingEventDimensions *_dimensions;
    long long _filterType;
}

+ (id)filterTypeJSONTransformer;
+ (id)dimensionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(retain, nonatomic) AWSPinpointTargetingEventDimensions *dimensions; // @synthesize dimensions=_dimensions;

@end

