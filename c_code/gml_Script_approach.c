// gml_Script_approach @ 0x14021f1d0

undefined8 *
gml_Script_approach(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                   undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined4 *local_40;
  undefined8 *local_38;
  
  local_120 = "gml_Script_animcurve_lerp";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 2;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0;
  local_158 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 3;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_14021f2af:
    local_168 = *(undefined4 *)puVar2;
    uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_168);
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 != &local_b8) goto LAB_14021f2af;
  }
  local_50 = &local_b8;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
LAB_14021f2fb:
    local_168 = *(undefined4 *)puVar2;
    uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_168);
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
    if (puVar2 != &local_a8) goto LAB_14021f2fb;
  }
  local_48 = &local_a8;
  uVar4 = CONCAT44(uVar5,DAT_141a04248);
  puVar1 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_138,2,uVar4,&local_50);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar1 != local_98) {
    local_168 = *puVar1;
    uStack_164 = puVar1[1];
    uStack_160 = puVar1[2];
    uStack_15c = puVar1[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_168);
  }
  local_40 = local_98;
  if (param_4 < 5) {
    puVar2 = &DAT_1419df7b0;
LAB_14021f3af:
    local_168 = *(undefined4 *)puVar2;
    uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_168);
  }
  else {
    puVar2 = (undefined8 *)param_5[4];
    if (puVar2 != &local_88) goto LAB_14021f3af;
  }
  local_38 = &local_88;
  uVar4 = CONCAT44(uVar5,DAT_141a04258);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,2,uVar4,&local_40);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != &local_148) {
    local_168 = *(undefined4 *)puVar2;
    uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_168);
  }
  local_118 = 4;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if (param_4 < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[2];
    if (puVar2 == &local_108) goto LAB_14021f4bf;
  }
  local_168 = *(undefined4 *)puVar2;
  uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_160 = *(undefined4 *)(puVar2 + 1);
  uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_168);
LAB_14021f4bf:
  local_78 = &local_108;
  if ((param_4 < 4) || (puVar3 = (undefined8 *)param_5[3], puVar3 != &local_f8)) {
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
  }
  local_70 = &local_f8;
  local_68 = &local_148;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_158,3,CONCAT44(uVar5,DAT_141a00c58),&local_78);
  if (puVar3 != param_3) {
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_168);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

