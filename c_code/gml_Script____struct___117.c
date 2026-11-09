// gml_Script____struct___117 @ 0x1402e6ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___117
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 local_80 [12];
  byte local_74;
  undefined4 local_70 [3];
  byte local_64;
  undefined8 local_60;
  byte local_54;
  uint local_50 [2];
  undefined8 *local_48;
  undefined1 *local_40;
  undefined4 *local_38;
  undefined8 *local_30;
  
  local_90 = "gml_Script_get_global_font_name";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0xe2;
  FUN_140041df0(local_50,param_4,1,param_5);
  _eh_vector_constructor_iterator_(local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar3 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef528);
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0xe2;
  puVar6 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_50[0];
  if ((int)local_50[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_48;
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_88 = 0xe2;
    if ((int)local_50[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_48;
      if (puVar4 == (undefined8 *)&DAT_141dcf158) goto LAB_1402e702e;
    }
    local_b8 = CONCAT44(uRam0000000141dcf15c,_DAT_141dcf158);
    uStack_b0 = uRam0000000141dcf160;
    uStack_ac = DAT_141dcf164;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_b8);
  }
LAB_1402e702e:
  local_88 = 0xe3;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uStack_ac = DAT_141dcf114;
  uStack_b0 = DAT_141dcf110;
  if ((1 << ((byte)DAT_141dcf114 & 0x1f) & 0x46U) == 0) {
    local_b8 = DAT_141dcf108;
  }
  else {
    FUN_1400419b0(&local_b8,&DAT_141dcf108);
  }
  uVar1 = uStack_ac;
  local_a8 = (undefined4)local_b8;
  uStack_a4 = local_b8._4_4_;
  uStack_a0 = uStack_b0;
  uStack_9c = uStack_ac;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_a8);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_40 = local_80;
  if (puVar3 != local_70) {
    local_a8 = *puVar3;
    uStack_a4 = puVar3[1];
    uStack_a0 = puVar3[2];
    uStack_9c = puVar3[3];
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_a8);
  }
  local_38 = local_70;
  if (((int)local_50[0] < 1) || (puVar6 = (undefined8 *)*local_48, puVar6 != &local_60)) {
    local_a8 = *(undefined4 *)puVar6;
    uStack_a4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_a0 = *(undefined4 *)(puVar6 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_60);
    }
    FUN_140041b80(&local_60,&local_a8);
  }
  local_30 = &local_60;
  puVar6 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_c8,3,&local_40);
  if (puVar6 != param_3) {
    local_a8 = *(undefined4 *)puVar6;
    uStack_a4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_a0 = *(undefined4 *)(puVar6 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,3,FUN_140041b30);
  if (0 < (int)local_50[0]) {
    puVar6 = local_48;
    do {
      puVar4 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_48);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

