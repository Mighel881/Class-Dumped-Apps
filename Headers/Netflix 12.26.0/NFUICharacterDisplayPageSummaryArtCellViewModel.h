//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AbstractDisplayPageCellViewModel.h"

@class NSString;

@interface NFUICharacterDisplayPageSummaryArtCellViewModel : AbstractDisplayPageCellViewModel
{
    NSString *_storyArtUrl;
    NSString *_matRating;
    NSString *_currentTitleDescription;
    NSString *_titleTreatment;
}

@property(copy, nonatomic) NSString *titleTreatment; // @synthesize titleTreatment=_titleTreatment;
@property(copy, nonatomic) NSString *currentTitleDescription; // @synthesize currentTitleDescription=_currentTitleDescription;
@property(copy, nonatomic) NSString *matRating; // @synthesize matRating=_matRating;
@property(copy, nonatomic) NSString *storyArtUrl; // @synthesize storyArtUrl=_storyArtUrl;
- (void).cxx_destruct;
- (void)configureWithDictionary:(id)arg1;

@end

