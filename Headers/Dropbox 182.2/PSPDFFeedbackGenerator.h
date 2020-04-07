//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UINotificationFeedbackGenerator, UISelectionFeedbackGenerator;

@interface PSPDFFeedbackGenerator : NSObject
{
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    UINotificationFeedbackGenerator *_notificationFeedbackGenerator;
}

@property(retain, nonatomic) UINotificationFeedbackGenerator *notificationFeedbackGenerator; // @synthesize notificationFeedbackGenerator=_notificationFeedbackGenerator;
@property(retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // @synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator;
- (void).cxx_destruct;
- (long long)notificationFeedbackTypeFromFeedbackType:(long long)arg1;
- (long long)impactFeedbackStyleFromFeedbackType:(long long)arg1;
- (id)feedbackGeneratorForImpactFeedbackStyle:(long long)arg1;
- (void)generateFeedbackForSelectingPageIndex:(unsigned long long)arg1 withDocumentPageCount:(unsigned long long)arg2;
- (void)generateFeedbackOfType:(long long)arg1;

@end
