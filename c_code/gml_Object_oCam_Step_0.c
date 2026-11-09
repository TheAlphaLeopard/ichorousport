// gml_Object_oCam_Step_0 @ 0x140883440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oCam_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar3;
  ulonglong uVar2;
  undefined1 **ppuVar4;
  ulonglong uVar5;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 local_48 [12];
  byte local_3c;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_90 = "gml_Script_anon@2740@gml_Object_oCam_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x68;
  _eh_vector_constructor_iterator_(local_78,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x6a;
  uVar3 = 0;
  puVar1 = (undefined8 *)
           gml_Script____struct___96_WindowGetMonitorRect_GameViewRect
                     (param_1,param_2,&local_e8,0,0);
  if (puVar1 != &local_d8) {
    local_f8 = *(undefined4 *)puVar1;
    uStack_f4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_f0 = *(undefined4 *)(puVar1 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_f8);
  }
  local_88 = 0x6b;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_f8 = _DAT_1419e9320;
  uStack_f4 = uRam00000001419e9324;
  uStack_f0 = uRam00000001419e9328;
  uStack_ec = uRam00000001419e932c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_f8);
  local_38 = local_78;
  local_f8 = _DAT_1419e9330;
  uStack_f4 = uRam00000001419e9334;
  uStack_f0 = uRam00000001419e9338;
  uStack_ec = uRam00000001419e933c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_f8);
  local_30 = local_68;
  ppuVar4 = &local_38;
  uVar2 = CONCAT44(uVar3,DAT_141a15f08);
  FUN_140e634e0(param_1,param_2,&local_e8,2,uVar2,ppuVar4);
  local_88 = 0x6c;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar5 = (ulonglong)ppuVar4 & 0xffffffffffffff00;
  uVar2 = uVar2 & 0xffffffffffffff00;
  FUN_140e87440(&local_d8,DAT_141a05568,0x80000000,&local_c8,uVar2,uVar5);
  uVar5 = uVar5 & 0xffffffffffffff00;
  uVar2 = uVar2 & 0xffffffffffffff00;
  FUN_140e87440(&local_d8,DAT_141a01028,0x80000000,&local_a8,uVar2,uVar5);
  uVar2 = uVar2 & 0xffffffffffffff00;
  FUN_140e87440(&local_d8,DAT_141a00fb8,0x80000000,&local_b8,uVar2,uVar5 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar2 >> 0x20);
  local_f8 = (undefined4)local_c8;
  uStack_f4 = local_c8._4_4_;
  uStack_f0 = uStack_c0;
  uStack_ec = uStack_bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_f8);
  local_38 = local_78;
  local_f8 = (undefined4)local_c8;
  uStack_f4 = local_c8._4_4_;
  uStack_f0 = uStack_c0;
  uStack_ec = uStack_bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_f8);
  local_30 = local_68;
  local_f8 = (undefined4)local_a8;
  uStack_f4 = local_a8._4_4_;
  uStack_f0 = uStack_a0;
  uStack_ec = uStack_9c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_f8);
  local_28 = local_58;
  local_f8 = (undefined4)local_b8;
  uStack_f4 = local_b8._4_4_;
  uStack_f0 = uStack_b0;
  uStack_ec = uStack_ac;
  if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_48);
  }
  FUN_140041b80(local_48,&local_f8);
  local_20 = local_48;
  ppuVar4 = &local_38;
  uVar2 = CONCAT44(uVar3,DAT_141a15bf8);
  FUN_140e634e0(param_1,param_2,&local_e8,4,uVar2,ppuVar4);
  local_88 = 0x6e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56f70);
  uVar5 = (ulonglong)ppuVar4 & 0xffffffffffffff00;
  uVar2 = uVar2 & 0xffffffffffffff00;
  FUN_140e87440(&local_d8,DAT_141a05568,0x80000000,&local_c8,uVar2,uVar5);
  FUN_140e609c0(param_1);
  if (&local_c8 != puVar1) {
    local_f8 = (undefined4)local_c8;
    uStack_f4 = local_c8._4_4_;
    uStack_f0 = uStack_c0;
    uStack_ec = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  FUN_140e60910(1);
  local_88 = 0x6f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57110);
  uVar5 = uVar5 & 0xffffffffffffff00;
  uVar2 = uVar2 & 0xffffffffffffff00;
  FUN_140e87440(&local_d8,DAT_141a01028,0x80000000,&local_a8,uVar2,uVar5);
  FUN_140e609c0(param_1);
  if (&local_a8 != puVar1) {
    local_f8 = (undefined4)local_a8;
    uStack_f4 = local_a8._4_4_;
    uStack_f0 = uStack_a0;
    uStack_ec = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  FUN_140e60910(1);
  local_88 = 0x70;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57230);
  FUN_140e87440(&local_d8,DAT_141a00fb8,0x80000000,&local_b8,uVar2 & 0xffffffffffffff00,
                uVar5 & 0xffffffffffffff00);
  FUN_140e609c0(param_1);
  if (&local_b8 != puVar1) {
    local_f8 = (undefined4)local_b8;
    uStack_f4 = local_b8._4_4_;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

