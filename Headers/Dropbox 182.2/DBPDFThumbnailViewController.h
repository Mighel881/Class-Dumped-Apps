//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFThumbnailViewController.h>

@interface DBPDFThumbnailViewController : PSPDFThumbnailViewController
{
    double _calculatedBottomInset;
}

@property(nonatomic) double calculatedBottomInset; // @synthesize calculatedBottomInset=_calculatedBottomInset;
- (void)viewSafeAreaInsetsDidChange;
- (void)db_tapOnBackgroundRecognized;
- (void)scrollToPageAtIndex:(unsigned long long)arg1 document:(id)arg2 animated:(_Bool)arg3;
- (void)db_setBottomInset:(double)arg1;
- (void)updateBottomInsetWithToolbarRect:(struct CGRect)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)arg1;

@end
