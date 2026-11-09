// gml_Script_status_get_color @ 0x1402e4a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_status_get_color(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___113";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x66;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddded8) {
    _Init_thread_header(&DAT_141ddded8);
    if (DAT_141ddded8 == -1) {
      DAT_141dddee0 = FUN_140e63aa0(DAT_1419eef88);
      _Init_thread_footer(&DAT_141ddded8);
    }
  }
  FUN_140e643a0(param_1,DAT_141dddee0);
  local_18 = 0x68;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a43d08);
  if (puVar1 != &DAT_141dcf368) {
    local_38 = _DAT_141dcf368;
    uStack_34 = uRam0000000141dcf36c;
    uStack_30 = uRam0000000141dcf370;
    uStack_2c = DAT_141dcf374;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x6a;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f3f0);
  if (puVar1 != &DAT_141dceee8) {
    local_38 = _DAT_141dceee8;
    uStack_34 = uRam0000000141dceeec;
    uStack_30 = uRam0000000141dceef0;
    uStack_2c = DAT_141dceef4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x6b;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef2e8);
  if (puVar1 != &DAT_141dcecb8) {
    local_38 = _DAT_141dcecb8;
    uStack_34 = uRam0000000141dcecbc;
    uStack_30 = uRam0000000141dcecc0;
    uStack_2c = DAT_141dcecc4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x6c;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef588);
  if (puVar1 != &DAT_141dcf288) {
    local_38 = _DAT_141dcf288;
    uStack_34 = uRam0000000141dcf28c;
    uStack_30 = uRam0000000141dcf290;
    uStack_2c = DAT_141dcf294;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x6d;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eef18);
  if (puVar1 != &DAT_141dcf268) {
    local_38 = _DAT_141dcf268;
    uStack_34 = uRam0000000141dcf26c;
    uStack_30 = uRam0000000141dcf270;
    uStack_2c = DAT_141dcf274;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x6f;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef578);
  if (puVar1 != &DAT_141dcf188) {
    local_38 = _DAT_141dcf188;
    uStack_34 = uRam0000000141dcf18c;
    uStack_30 = uRam0000000141dcf190;
    uStack_2c = DAT_141dcf194;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x71;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeea8);
  if (puVar1 != &DAT_141dceb68) {
    local_38 = _DAT_141dceb68;
    uStack_34 = uRam0000000141dceb6c;
    uStack_30 = uRam0000000141dceb70;
    uStack_2c = DAT_141dceb74;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x72;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef438);
  if (puVar1 != &DAT_141dcf238) {
    local_38 = _DAT_141dcf238;
    uStack_34 = uRam0000000141dcf23c;
    uStack_30 = uRam0000000141dcf240;
    uStack_2c = DAT_141dcf244;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x74;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef598);
  if (puVar1 != &DAT_141dcf008) {
    local_38 = _DAT_141dcf008;
    uStack_34 = uRam0000000141dcf00c;
    uStack_30 = uRam0000000141dcf010;
    uStack_2c = DAT_141dcf014;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x75;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1ecb0);
  if (puVar1 != &DAT_141dcea48) {
    local_38 = _DAT_141dcea48;
    uStack_34 = uRam0000000141dcea4c;
    uStack_30 = uRam0000000141dcea50;
    uStack_2c = DAT_141dcea54;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x76;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeeb8);
  if (puVar1 != &DAT_141dcec38) {
    local_38 = _DAT_141dcec38;
    uStack_34 = uRam0000000141dcec3c;
    uStack_30 = uRam0000000141dcec40;
    uStack_2c = DAT_141dcec44;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x78;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef4b8);
  if (puVar1 != &DAT_141dcee28) {
    local_38 = _DAT_141dcee28;
    uStack_34 = uRam0000000141dcee2c;
    uStack_30 = uRam0000000141dcee30;
    uStack_2c = DAT_141dcee34;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x79;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef538);
  if (puVar1 != &DAT_141dcf348) {
    local_38 = _DAT_141dcf348;
    uStack_34 = uRam0000000141dcf34c;
    uStack_30 = uRam0000000141dcf350;
    uStack_2c = DAT_141dcf354;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x7b;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eef28);
  if (puVar1 != &DAT_141dcecf8) {
    local_38 = _DAT_141dcecf8;
    uStack_34 = uRam0000000141dcecfc;
    uStack_30 = uRam0000000141dced00;
    uStack_2c = DAT_141dced04;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x7d;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef428);
  if (puVar1 != &DAT_141dced18) {
    local_38 = _DAT_141dced18;
    uStack_34 = uRam0000000141dced1c;
    uStack_30 = uRam0000000141dced20;
    uStack_2c = DAT_141dced24;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x7e;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef1b8);
  if (puVar1 != &DAT_141dcf0a8) {
    local_38 = _DAT_141dcf0a8;
    uStack_34 = uRam0000000141dcf0ac;
    uStack_30 = uRam0000000141dcf0b0;
    uStack_2c = DAT_141dcf0b4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x80;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef248);
  if (puVar1 != &DAT_141dceec8) {
    local_38 = _DAT_141dceec8;
    uStack_34 = uRam0000000141dceecc;
    uStack_30 = uRam0000000141dceed0;
    uStack_2c = DAT_141dceed4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x82;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef198);
  if (puVar1 != &DAT_141dce928) {
    local_38 = _DAT_141dce928;
    uStack_34 = uRam0000000141dce92c;
    uStack_30 = uRam0000000141dce930;
    uStack_2c = DAT_141dce934;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x83;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef5b8);
  if (puVar1 != &DAT_141dcecc8) {
    local_38 = _DAT_141dcecc8;
    uStack_34 = uRam0000000141dceccc;
    uStack_30 = uRam0000000141dcecd0;
    uStack_2c = DAT_141dcecd4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x84;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef188);
  if (puVar1 != &DAT_141dcee68) {
    local_38 = _DAT_141dcee68;
    uStack_34 = uRam0000000141dcee6c;
    uStack_30 = uRam0000000141dcee70;
    uStack_2c = DAT_141dcee74;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x85;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef288);
  if (puVar1 != &DAT_141dcef88) {
    local_38 = _DAT_141dcef88;
    uStack_34 = uRam0000000141dcef8c;
    uStack_30 = uRam0000000141dcef90;
    uStack_2c = DAT_141dcef94;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x87;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eef68);
  if (puVar1 != &DAT_141dce938) {
    local_38 = _DAT_141dce938;
    uStack_34 = uRam0000000141dce93c;
    uStack_30 = uRam0000000141dce940;
    uStack_2c = DAT_141dce944;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x88;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef798);
  if (puVar1 != &DAT_141dcedd8) {
    local_38 = _DAT_141dcedd8;
    uStack_34 = uRam0000000141dceddc;
    uStack_30 = uRam0000000141dcede0;
    uStack_2c = DAT_141dcede4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x8a;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef368);
  if (puVar1 != &DAT_141dced78) {
    local_38 = _DAT_141dced78;
    uStack_34 = uRam0000000141dced7c;
    uStack_30 = uRam0000000141dced80;
    uStack_2c = DAT_141dced84;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x8c;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1ecf0);
  if (puVar1 != &DAT_141dcecd8) {
    local_38 = _DAT_141dcecd8;
    uStack_34 = uRam0000000141dcecdc;
    uStack_30 = uRam0000000141dcece0;
    uStack_2c = DAT_141dcece4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x8d;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef638);
  if (puVar1 != &DAT_141dcf2e8) {
    local_38 = _DAT_141dcf2e8;
    uStack_34 = uRam0000000141dcf2ec;
    uStack_30 = uRam0000000141dcf2f0;
    uStack_2c = DAT_141dcf2f4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x8f;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f480);
  if (puVar1 != &DAT_141dcf218) {
    local_38 = _DAT_141dcf218;
    uStack_34 = uRam0000000141dcf21c;
    uStack_30 = uRam0000000141dcf220;
    uStack_2c = DAT_141dcf224;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x90;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef558);
  if (puVar1 != &DAT_141dcea28) {
    local_38 = _DAT_141dcea28;
    uStack_34 = uRam0000000141dcea2c;
    uStack_30 = uRam0000000141dcea30;
    uStack_2c = DAT_141dcea34;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x91;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eef58);
  if (puVar1 != &DAT_141dcec68) {
    local_38 = _DAT_141dcec68;
    uStack_34 = uRam0000000141dcec6c;
    uStack_30 = uRam0000000141dcec70;
    uStack_2c = DAT_141dcec74;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x92;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef608);
  if (puVar1 != &DAT_141dced68) {
    local_38 = _DAT_141dced68;
    uStack_34 = uRam0000000141dced6c;
    uStack_30 = uRam0000000141dced70;
    uStack_2c = DAT_141dced74;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x94;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef008);
  if (puVar1 != &DAT_141dcede8) {
    local_38 = _DAT_141dcede8;
    uStack_34 = uRam0000000141dcedec;
    uStack_30 = uRam0000000141dcedf0;
    uStack_2c = DAT_141dcedf4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x95;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef5a8);
  if (puVar1 != &DAT_141dcec28) {
    local_38 = _DAT_141dcec28;
    uStack_34 = uRam0000000141dcec2c;
    uStack_30 = uRam0000000141dcec30;
    uStack_2c = DAT_141dcec34;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x96;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef148);
  if (puVar1 != &DAT_141dcefb8) {
    local_38 = _DAT_141dcefb8;
    uStack_34 = uRam0000000141dcefbc;
    uStack_30 = uRam0000000141dcefc0;
    uStack_2c = DAT_141dcefc4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x97;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef628);
  if (puVar1 != &DAT_141dce888) {
    local_38 = _DAT_141dce888;
    uStack_34 = uRam0000000141dce88c;
    uStack_30 = uRam0000000141dce890;
    uStack_2c = DAT_141dce894;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x98;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef658);
  if (puVar1 != &DAT_141dcec08) {
    local_38 = _DAT_141dcec08;
    uStack_34 = uRam0000000141dcec0c;
    uStack_30 = uRam0000000141dcec10;
    uStack_2c = DAT_141dcec14;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x9a;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeff8);
  if (puVar1 != &DAT_141dce868) {
    local_38 = _DAT_141dce868;
    uStack_34 = uRam0000000141dce86c;
    uStack_30 = uRam0000000141dce870;
    uStack_2c = DAT_141dce874;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x9b;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eee88);
  if (puVar1 != &DAT_141dcf1a8) {
    local_38 = _DAT_141dcf1a8;
    uStack_34 = uRam0000000141dcf1ac;
    uStack_30 = uRam0000000141dcf1b0;
    uStack_2c = DAT_141dcf1b4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x9c;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef698);
  if (puVar1 != &DAT_141dcefa8) {
    local_38 = _DAT_141dcefa8;
    uStack_34 = uRam0000000141dcefac;
    uStack_30 = uRam0000000141dcefb0;
    uStack_2c = DAT_141dcefb4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x9d;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef3a8);
  if (puVar1 != &DAT_141dcec88) {
    local_38 = _DAT_141dcec88;
    uStack_34 = uRam0000000141dcec8c;
    uStack_30 = uRam0000000141dcec90;
    uStack_2c = DAT_141dcec94;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0x9f;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f3d0);
  if (puVar1 != &DAT_141dcea78) {
    local_38 = _DAT_141dcea78;
    uStack_34 = uRam0000000141dcea7c;
    uStack_30 = uRam0000000141dcea80;
    uStack_2c = DAT_141dcea84;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0xa0;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f210);
  if (puVar1 != &DAT_141dcf0c8) {
    local_38 = _DAT_141dcf0c8;
    uStack_34 = uRam0000000141dcf0cc;
    uStack_30 = uRam0000000141dcf0d0;
    uStack_2c = DAT_141dcf0d4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 0xa2;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeec8);
  if (puVar1 != &DAT_141dcf308) {
    local_38 = _DAT_141dcf308;
    uStack_34 = uRam0000000141dcf30c;
    uStack_30 = uRam0000000141dcf310;
    uStack_2c = DAT_141dcf314;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

