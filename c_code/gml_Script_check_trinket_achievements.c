// gml_Script_check_trinket_achievements @ 0x1405de410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_check_trinket_achievements
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  undefined4 uVar12;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  uint local_120 [2];
  undefined8 *local_118;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  
  local_130 = "gml_Script_Trinket";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 3;
  FUN_140041df0(local_120,param_4,5,param_5);
  _eh_vector_constructor_iterator_(&local_108,0x10,9,FUN_1400424d0,FUN_140041b30);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57320);
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0c8c) &&
     (_Init_thread_header(&DAT_141de0c8c), DAT_141de0c8c == -1)) {
    DAT_141de0c80 = FUN_140e63aa0(DAT_1419ffa28);
    _Init_thread_footer(&DAT_141de0c8c);
  }
  local_128 = 3;
  puVar10 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_120[0];
  if ((int)local_120[0] < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_118[4];
  }
  iVar1 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_128 = 3;
    FUN_140e645a0(&local_148,&LAB_1405ddf70,param_1);
    if ((int)local_120[0] < 5) {
      puVar7 = &DAT_1419df7b0;
LAB_1405de5a7:
      local_168 = (undefined4)local_148;
      uStack_164 = local_148._4_4_;
      uStack_160 = uStack_140;
      uStack_15c = uStack_13c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_168);
    }
    else {
      puVar7 = (undefined8 *)local_118[4];
      if (&local_148 != puVar7) goto LAB_1405de5a7;
    }
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((int)local_120[0] < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_1405de63d:
    local_168 = *(undefined4 *)puVar7;
    uStack_164 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_160 = *(undefined4 *)(puVar7 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_168);
  }
  else {
    puVar7 = (undefined8 *)*local_118;
    if (puVar7 != &local_108) goto LAB_1405de63d;
  }
  local_78 = &local_108;
  if ((int)local_120[0] < 2) {
    puVar7 = &DAT_1419df7b0;
LAB_1405de68c:
    local_168 = *(undefined4 *)puVar7;
    uStack_164 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_160 = *(undefined4 *)(puVar7 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
  }
  else {
    puVar7 = (undefined8 *)local_118[1];
    if (puVar7 != &local_f8) goto LAB_1405de68c;
  }
  local_70 = &local_f8;
  if ((int)local_120[0] < 3) {
    puVar7 = &DAT_1419df7b0;
LAB_1405de6db:
    local_168 = *(undefined4 *)puVar7;
    uStack_164 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_160 = *(undefined4 *)(puVar7 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_168);
  }
  else {
    puVar7 = (undefined8 *)local_118[2];
    if (puVar7 != &local_e8) goto LAB_1405de6db;
  }
  local_68 = &local_e8;
  if ((int)local_120[0] < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_118[4];
    if (puVar7 == &local_d8) goto LAB_1405de75a;
  }
  local_168 = *(undefined4 *)puVar7;
  uStack_164 = *(undefined4 *)((longlong)puVar7 + 4);
  uStack_160 = *(undefined4 *)(puVar7 + 1);
  uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_168);
LAB_1405de75a:
  local_60 = &local_d8;
  FUN_140e64370();
  ppuVar11 = &local_78;
  gml_Script_anon_4496_Buff_OFFERINGSINIT(param_1,param_2,&local_158,4,ppuVar11);
  uVar12 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
  if (DAT_141ddc1a7 == '\0') {
    uVar3 = FUN_140e63aa0(DAT_1419f5898);
    FUN_140e8da10(param_1,DAT_141de0c80,uVar3);
    FUN_140e64380(DAT_141de0c80,"gml_Script_Trinket");
    FUN_140e64380(param_1,"gml_Script_Trinket");
  }
  FUN_140e643a0(param_1,DAT_141de0c80);
  local_128 = 5;
  puVar4 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6288);
  if (puVar4 != &DAT_141dd4f38) {
    local_168 = _DAT_141dd4f38;
    uStack_164 = uRam0000000141dd4f3c;
    uStack_160 = uRam0000000141dd4f40;
    uStack_15c = DAT_141dd4f44;
    if ((1 << ((byte)*(undefined4 *)(puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_168);
  }
  local_128 = 6;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5948);
  FUN_140e609c0(param_1);
  puVar6 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_158,0,CONCAT44(uVar12,DAT_1419fd6d8),0);
  if (puVar6 != puVar5) {
    local_168 = *puVar6;
    uStack_164 = puVar6[1];
    uStack_160 = puVar6[2];
    uStack_15c = puVar6[3];
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_168);
  }
  FUN_140e60910(1);
  local_128 = 8;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a918);
  FUN_140e609c0(param_1);
  if ((int)local_120[0] < 4) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_118[3];
  }
  if (puVar8 != puVar7) {
    local_168 = *(undefined4 *)puVar8;
    uStack_164 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_160 = *(undefined4 *)(puVar8 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_168);
  }
  FUN_140e60910(1);
  local_128 = 0xb;
  uStack_13c = 6;
  if (0 < (int)local_120[0]) {
    puVar10 = (undefined8 *)*local_118;
  }
  local_148 = param_1;
  FUN_140e98ef0(param_1,param_2,uVar2,puVar10,&local_148);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_128 = 0xd;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5858);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_148,gml_Script_Trinket,param_1);
  if (&local_148 != puVar10) {
    local_168 = (undefined4)local_148;
    uStack_164 = local_148._4_4_;
    uStack_160 = uStack_140;
    uStack_15c = uStack_13c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_168);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,9,FUN_140041b30);
  if (0 < (int)local_120[0]) {
    puVar10 = local_118;
    do {
      puVar7 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_118);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

