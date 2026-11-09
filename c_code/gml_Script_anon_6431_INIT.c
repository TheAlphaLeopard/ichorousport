// gml_Script_anon_6431_INIT @ 0x1402e6a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_6431_INIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined4 uVar7;
  undefined1 **ppuVar6;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined1 local_98 [12];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined4 local_68 [3];
  byte local_5c;
  uint local_58 [2];
  undefined8 *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  undefined8 *local_38;
  undefined4 *local_30;
  
  local_b0 = "gml_Script_get_global_font";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0xdd;
  FUN_140041df0(local_58,param_4,1,param_5);
  _eh_vector_constructor_iterator_(local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef528);
  local_dc = 0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0xdd;
  puVar5 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_50;
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_a8 = 0xdd;
    if ((int)local_58[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_50;
      if (puVar3 == (undefined8 *)&DAT_141dcf158) goto LAB_1402e6bca;
    }
    local_c8 = CONCAT44(uRam0000000141dcf15c,_DAT_141dcf158);
    uStack_c0 = uRam0000000141dcf160;
    uStack_bc = DAT_141dcf164;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_c8);
  }
LAB_1402e6bca:
  local_a8 = 0xde;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_bc = DAT_141dcf114;
  uStack_c0 = DAT_141dcf110;
  if ((1 << ((byte)DAT_141dcf114 & 0x1f) & 0x46U) == 0) {
    local_c8 = DAT_141dcf108;
  }
  else {
    FUN_1400419b0(&local_c8,&DAT_141dcf108);
  }
  uVar7 = uStack_bc;
  local_d8 = (undefined4)local_c8;
  uStack_d4 = local_c8._4_4_;
  uStack_d0 = uStack_c0;
  uStack_cc = uStack_bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_48 = local_98;
  if (puVar2 != local_88) {
    local_d8 = *puVar2;
    uStack_d4 = puVar2[1];
    uStack_d0 = puVar2[2];
    uStack_cc = puVar2[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_d8);
  }
  local_40 = local_88;
  if (((int)local_58[0] < 1) || (puVar5 = (undefined8 *)*local_50, puVar5 != &local_78)) {
    local_d8 = *(undefined4 *)puVar5;
    uStack_d4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_d0 = *(undefined4 *)(puVar5 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_d8);
  }
  local_38 = &local_78;
  ppuVar6 = &local_48;
  puVar2 = (undefined4 *)FUN_140e64420(param_1,param_2,&local_f8,3,ppuVar6);
  uVar7 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
  if (puVar2 != local_68) {
    local_d8 = *puVar2;
    uStack_d4 = puVar2[1];
    uStack_d0 = puVar2[2];
    uStack_cc = puVar2[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_d8);
  }
  local_30 = local_68;
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar7,DAT_141a086f8),&local_30);
  if (puVar5 != param_3) {
    local_d8 = *(undefined4 *)puVar5;
    uStack_d4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_d0 = *(undefined4 *)(puVar5 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,4,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar5 = local_50;
    do {
      puVar3 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

