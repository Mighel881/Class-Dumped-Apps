//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DBChooserViewController, NSString, UIViewController, _TtC17DropboxExtensions29AccountSwitcherViewController;
@protocol DBFileMetadataFull;

@protocol DBChooserViewControllerDelegate
- (_Bool)chooserNeedsLogin:(_TtC17DropboxExtensions29AccountSwitcherViewController *)arg1 userId:(NSString *)arg2;
- (void)chooserCancelled:(UIViewController *)arg1;
- (_Bool)searchBarShouldBeginEditingWithChooser:(DBChooserViewController *)arg1;
- (void)chooser:(DBChooserViewController *)arg1 choseFolder:(id <DBFileMetadataFull>)arg2 userId:(NSString *)arg3;
- (void)chooser:(DBChooserViewController *)arg1 itemSelected:(id <DBFileMetadataFull>)arg2 userId:(NSString *)arg3;
@end
