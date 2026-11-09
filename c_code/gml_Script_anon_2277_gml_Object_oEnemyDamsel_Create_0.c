// gml_Script_anon_2277_gml_Object_oEnemyDamsel_Create_0 @ 0x1409773a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_anon_2277_gml_Object_oEnemyDamsel_Create_0
          (longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar8;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  longlong *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_90 = "gml_Script_anon@1539@gml_Object_oEnemyDamsel_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x4f;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_13c = 0xffffff;
  local_148 = (longlong *)0x0;
  uStack_14c = 0xffffff;
  local_158 = (longlong *)0x0;
  uStack_15c = 0xffffff;
  local_168 = (longlong *)0x0;
  uStack_16c = 0xffffff;
  local_178 = (longlong *)0x0;
  local_11c = 0;
  uVar5 = 0;
  local_128 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x50;
  bVar4 = false;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar2 != &local_118) {
    local_198 = (longlong *)*puVar2;
    uStack_190 = *(undefined4 *)(puVar2 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_198);
  }
  local_78 = &local_118;
  ppuVar9 = &local_78;
  uVar6 = CONCAT44(uVar8,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar6,ppuVar9);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    uStack_18c = 6;
    uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_148,uVar6,uVar10);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uStack_18c = 6;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_158,uVar6 & 0xffffffffffffff00,
                  uVar10 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_168,param_1,param_2);
    plVar7 = param_1;
    FUN_140e87170(uVar3,DAT_1419fe158,0x80000000,&local_178,param_1,param_2);
    uVar8 = (undefined4)((ulonglong)plVar7 >> 0x20);
    local_198 = local_148;
    uStack_190 = uStack_140;
    uStack_18c = uStack_13c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_198);
    local_70 = local_108;
    local_198 = local_158;
    uStack_190 = uStack_150;
    uStack_18c = uStack_14c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_198);
    local_68 = local_f8;
    local_198 = local_168;
    uStack_190 = uStack_160;
    uStack_18c = uStack_15c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_198);
    local_60 = local_e8;
    local_198 = local_178;
    uStack_190 = uStack_170;
    uStack_18c = uStack_16c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_198);
    local_58 = local_d8;
    uStack_18c = 0xf;
    local_198 = (longlong *)0x100000000000149;
    local_138 = 0x149;
    uStack_134 = 0x1000000;
    uStack_130 = uStack_190;
    uStack_12c = 0xf;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_138);
    local_138 = _DAT_1419df7a0;
    uStack_134 = uRam00000001419df7a4;
    uStack_130 = uRam00000001419df7a8;
    uStack_12c = uRam00000001419df7ac;
    local_50 = local_c8;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_138);
    local_48 = local_b8;
    local_138 = _DAT_1419df7c0;
    uStack_134 = uRam00000001419df7c4;
    uStack_130 = uRam00000001419df7c8;
    uStack_12c = uRam00000001419df7cc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_138);
    local_40 = local_a8;
    uVar3 = FUN_140e634e0(param_1,param_2,&local_188,7,CONCAT44(uVar8,DAT_1419f60a8),&local_70);
    cVar1 = FUN_140e491e0(uVar3);
    bVar4 = cVar1 == '\0';
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (bVar4) {
    uVar5 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar5 << 0x20;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

