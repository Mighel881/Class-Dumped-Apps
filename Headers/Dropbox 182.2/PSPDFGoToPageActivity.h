//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFDocumentActivity.h>

@interface PSPDFGoToPageActivity : PSPDFDocumentActivity
{
    _Bool _enablePartialLabelMatching;
    long long _currentPageIndex;
}

@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) _Bool enablePartialLabelMatching; // @synthesize enablePartialLabelMatching=_enablePartialLabelMatching;
- (void)performActivityAnimated:(_Bool)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)init;

@end
