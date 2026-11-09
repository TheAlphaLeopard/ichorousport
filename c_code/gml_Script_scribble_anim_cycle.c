// gml_Script_scribble_anim_cycle @ 0x140451680

undefined8 *
gml_Script_scribble_anim_cycle
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *local_res8;
  undefined8 local_res10;
  undefined1 **ppuVar6;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [16];
  longlong local_b0;
  undefined1 local_98 [48];
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_40;
  
  local_d0 = "gml_Script_scribble_anim_blink";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 6;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddeec0) &&
     (_Init_thread_header(&DAT_141ddeec0), DAT_141ddeec0 == -1)) {
    DAT_141ddeeb8 = (longlong *)FUN_140e63aa0(DAT_1419f7668);
    _Init_thread_footer(&DAT_141ddeec0);
  }
  if (DAT_141ddc175 == '\0') {
    FUN_140e64380(DAT_141ddeeb8,"gml_Script_scribble_anim_blink");
    FUN_140e64380(local_res8,"gml_Script_scribble_anim_blink");
  }
  local_c8 = 8;
  if (DAT_141ddc175 == '\0') {
    DAT_141ddc175 = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddeeb8 + 0x10))(DAT_141ddeeb8,DAT_141a04cd8);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    local_f8 = (undefined4)DAT_1419df7b0;
    uStack_f4 = DAT_1419df7b0._4_4_;
    uStack_f0 = DAT_1419df7b8;
    uStack_ec = DAT_1419df7bc;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_f8);
    local_40 = local_68;
    ppuVar6 = &local_40;
    uVar4 = gml_Script___scribble_texture_get_material(local_res8,local_res10,&local_108,1,ppuVar6);
    FUN_140e87440(uVar4,DAT_141a05158,0x80000000,&local_e8,(ulonglong)ppuVar6 & 0xffffffffffffff00,0
                 );
    FUN_140e609c0(DAT_141ddeeb8);
    if (&local_e8 != puVar3) {
      local_f8 = (undefined4)local_e8;
      uStack_f4 = local_e8._4_4_;
      uStack_f0 = uStack_e0;
      uStack_ec = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_f8);
    }
    FUN_140e60910(1);
  }
  local_c8 = 9;
  uVar4 = (**(code **)(*DAT_141ddeeb8 + 8))(DAT_141ddeeb8,DAT_141a04cd8);
  iVar2 = FUN_140e63cb0(local_c0,&local_res8,&local_res10,uVar4);
  if (0 < iVar2) {
    do {
      local_c8 = 0xb;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05a68);
      FUN_140e609c0(local_res8);
      if (param_4 < 1) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)*param_5;
      }
      if (puVar5 != puVar3) {
        local_f8 = *(undefined4 *)puVar5;
        uStack_f4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_f0 = *(undefined4 *)(puVar5 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_f8);
      }
      FUN_140e60910(1);
      local_c8 = 0xc;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05fb8);
      FUN_140e609c0(local_res8);
      if (param_4 < 2) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)param_5[1];
      }
      if (puVar5 != puVar3) {
        local_f8 = *(undefined4 *)puVar5;
        uStack_f4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_f0 = *(undefined4 *)(puVar5 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_f8);
      }
      FUN_140e60910(1);
      local_c8 = 0xd;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a056a8);
      FUN_140e609c0(local_res8);
      if (param_4 < 3) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)param_5[2];
      }
      if (puVar5 != puVar3) {
        local_f8 = *(undefined4 *)puVar5;
        uStack_f4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_f0 = *(undefined4 *)(puVar5 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_f8);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_c0,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_c0,&local_res8,&local_res10);
  if (local_b0 != 0) {
    FUN_140e4cd60();
    local_b0 = 0;
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

