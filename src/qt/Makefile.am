include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = seci-qt
noinst_LIBRARIES = libseciqt.a
SUBDIRS = . $(BUILD_TEST_QT)
DIST_SUBDIRS = . test

# seci qt core #
QT_TS = \
  locale/seci_bar.ts \
  locale/seci_bg.ts \
  locale/seci_ca.ts \
  locale/seci_cmn.ts \
  locale/seci_cs.ts \
  locale/seci_da.ts \
  locale/seci_de.ts \
  locale/seci_el.ts \
  locale/seci_en.ts \
  locale/seci_eo.ts \
  locale/seci_es.ts \
  locale/seci_fi.ts \
  locale/seci_fr.ts \
  locale/seci_hu_HU.ts \
  locale/seci_it.ts \
  locale/seci_lv_LV.ts \
  locale/seci_nb.ts \
  locale/seci_nl.ts \
  locale/seci_pl.ts \
  locale/seci_pt.ts \
  locale/seci_pt_BR.ts \
  locale/seci_ru.ts \
  locale/seci_sk.ts \
  locale/seci_sv.ts \
  locale/seci_tr.ts \
  locale/seci_vi.ts \
  locale/seci_zh_CN.ts \
  locale/seci_zh_HK.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/darksendconfig.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/overviewpage.ui \
  forms/paperwalletdialog.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui \
  forms/masternodelist.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_seciaddressvalidator.cpp \
  moc_seciamountfield.cpp \
  moc_secigui.cpp \
  moc_seciunits.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_darksendconfig.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_peertablemodel.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_verticallabel.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp \
  moc_masternodelist.cpp

SECI_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  seci.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_seci.cpp
QT_QRC = seci.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

SECI_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  seciaddressvalidator.h \
  seciamountfield.h \
  secigui.h \
  seciunits.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  darksendconfig.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  peertablemodel.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  utilitydialog.h \
  verticallabel.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h \
  winshutdownmonitor.h \
  masternodelist.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/seci.ico \
  res/icons/seci.png \
  res/icons/seci_testnet.ico \
  res/icons/seci_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/print.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png \
  res/icons/drkblue_editpaste.png \
  res/icons/drkblue_address-book.png \
  res/icons/drkblue_editcopy.png \
  res/icons/drkblue_remove.png \
  res/icons/browse.png


SECI_QT_CPP = \
  seci.cpp \
  seciaddressvalidator.cpp \
  seciamountfield.cpp \
  secigui.cpp \
  seciunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  darksendconfig.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp \
  verticallabel.cpp \
  winshutdownmonitor.cpp

if ENABLE_WALLET
SECI_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  darksendconfig.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  peertablemodel.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  signverifymessagedialog.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  verticallabel.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png \
  res/images/paper_wallet.png \
  res/images/seci_logo_horizontal.png \
  res/images/drkblue_downArrow.png \
  res/images/drkblue_downArrow_small.png \
  res/images/drkblue_upArrow_small.png \
  res/images/drkblue_leftArrow_small.png \
  res/images/drkblue_rightArrow_small.png \
  res/images/drkblue_qtreeview_selected.png \
  res/images/seci_main_hg.png \
  res/images/seci_theme1_hg.png \
  res/images/seci_theme2_hg.png \
  res/images/seci_theme3_hg.png

RES_CSS = \
  res/css/seci_main.css \
  res/css/seci_theme1.css \
  res/css/seci_theme2.css \
  res/css/seci_theme3.css 
  
RES_MOVIES = $(wildcard res/movies/spinner-*.png)

SECI_RC = res/seci-qt-res.rc

libseciqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libseciqt_a_SOURCES = $(SECI_QT_CPP) $(SECI_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(RES_CSS)

nodist_libseciqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libseciqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# seci-qt binary #
seci_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
seci_qt_SOURCES = seci.cpp
if TARGET_DARWIN
  seci_qt_SOURCES += $(SECI_MM)
endif
if TARGET_WINDOWS
  seci_qt_SOURCES += $(SECI_RC)
endif
seci_qt_LDADD = libseciqt.a $(LIBSECI_SERVER)
if ENABLE_WALLET
seci_qt_LDADD += $(LIBSECI_WALLET)
endif
seci_qt_LDADD += $(LIBSECI_CLI) $(LIBSECI_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
seci_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

secistrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/secistrings.cpp

translate: secistrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(SECI_QT_CPP) $(SECI_QT_H) $(SECI_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/seci_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(RES_CSS) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name seci -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -e '/^\*\*.*Created:/d' $@ > $@.n && mv $@{.n,}
	$(SED) -e '/^\*\*.*by:/d' $@  > $@.n && mv $@{.n,}

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
