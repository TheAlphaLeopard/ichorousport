// gml_Script_character_delay_clear_anon_8401___scribble_class_typist___scribble_class_typist @ 0x140166ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_character_delay_clear_anon_8401___scribble_class_typist___scribble_class_typist
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  ulonglong local_88;
  undefined4 local_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_e0 = 
  "gml_Script_character_delay_add@anon@7342@__scribble_class_typist@__scribble_class_typist";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x10e;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_10c = 0;
  local_118 = 0;
  local_11c = 0;
  local_128 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x110;
  puVar7 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140166bc8:
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    FUN_140041b80(&local_f8,&local_148);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_f8) goto LAB_140166bc8;
  }
  local_d8 = 0x111;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0;
  local_d8 = 0x113;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140166c57:
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_148);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_c8) goto LAB_140166c57;
  }
  local_78 = &local_c8;
  uVar8 = CONCAT44(uVar9,DAT_1419fdbf8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_118,1,uVar8,&local_78);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') goto LAB_14016710b;
  local_d8 = 0x115;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140166d34:
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_148);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_b8) goto LAB_140166d34;
  }
  local_70 = &local_b8;
  local_148 = CONCAT44(uRam00000001419e1ea4,_DAT_1419e1ea0);
  uStack_140 = uRam00000001419e1ea8;
  uStack_13c = uRam00000001419e1eac;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_68 = local_a8;
  uVar3 = CONCAT44(uVar9,DAT_141a079a8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,2,uVar3,&local_70);
  uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar4 != &local_98) {
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_148);
  }
  local_60 = &local_98;
  uVar3 = CONCAT44(uVar9,DAT_1419fdc48);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,1,uVar3,&local_60);
  uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar4 != &local_f8) {
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
  }
  local_d8 = 0x116;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140166ead:
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_148);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_c8) goto LAB_140166ead;
  }
  local_78 = &local_c8;
  uVar8 = CONCAT44(uVar9,DAT_141a07b08);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_118,1,uVar8,&local_78);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_13c = 0;
  local_148 = 0x4000000000000000;
  uVar2 = FUN_140e851f0(uVar3,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (0x7fffffff < uVar2) goto LAB_14016710b;
  local_d8 = 0x116;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140166fd6:
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_148);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_b8) goto LAB_140166fd6;
  }
  local_70 = &local_b8;
  local_148 = CONCAT44(uRam00000001419e1e94,_DAT_1419e1e90);
  uStack_140 = uRam00000001419e1e98;
  uStack_13c = uRam00000001419e1e9c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_68 = local_a8;
  uVar3 = CONCAT44(uVar9,DAT_141a079a8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,2,uVar3,&local_70);
  uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar4 != &local_98) {
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_148);
  }
  local_60 = &local_98;
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar9,DAT_1419fdc48),&local_60);
  if (puVar4 != &local_108) {
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
  }
LAB_14016710b:
  local_d8 = 0x119;
  uVar5 = FUN_140e4a8b0(&local_f8);
  lVar6 = FUN_140e4a8b0(&local_108);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 10;
  local_d8 = 0x11a;
  local_88 = lVar6 << 0x20 | uVar5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07868);
  uStack_13c = 0xd;
  local_148 = 0x3ff0000000000000;
  if (&local_148 != puVar4) {
    local_58 = 0;
    uStack_54 = 0x3ff00000;
    uStack_50 = uStack_140;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_58);
  }
  local_d8 = 0x11b;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a076e8);
  if (1 < param_4) {
    puVar7 = (undefined8 *)param_5[1];
  }
  FUN_140e98ef0(param_1,param_2,uVar3,&local_88,puVar7);
  local_d8 = 0x11d;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

