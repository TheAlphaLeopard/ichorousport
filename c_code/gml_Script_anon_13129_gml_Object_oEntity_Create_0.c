// gml_Script_anon_13129_gml_Object_oEntity_Create_0 @ 0x140ab9120

longlong *
gml_Script_anon_13129_gml_Object_oEntity_Create_0
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 **ppuVar6;
  undefined4 uVar7;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  
  local_110 = "gml_Script_anon@12790@gml_Object_oEntity_Create_0";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x254;
  _eh_vector_constructor_iterator_(local_f8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_11c = 0;
  uVar5 = 0;
  local_128 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x256;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_140ab91f7:
    local_148 = *puVar3;
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_148);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_d8) goto LAB_140ab91f7;
  }
  local_68 = &local_d8;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_140ab9243:
    local_148 = *puVar3;
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_148);
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 != &local_c8) goto LAB_140ab9243;
  }
  local_60 = &local_c8;
  ppuVar6 = &local_68;
  uVar2 = gml_Script_IsBetween(param_1,param_2,&local_128,2,ppuVar6);
  uVar7 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    cVar1 = '\x01';
    goto LAB_140ab93eb;
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_140ab92ed:
    local_148 = *puVar3;
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_148);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_b8) goto LAB_140ab92ed;
  }
  local_58 = &local_b8;
  if ((param_4 < 2) || (puVar4 = (undefined8 *)param_5[1], puVar4 != &local_a8)) {
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_148);
  }
  local_50 = &local_a8;
  uStack_13c = 0xf;
  local_148 = 0x1000000000000ea;
  local_88 = 0xea;
  uStack_84 = 0x1000000;
  uStack_80 = uStack_140;
  uStack_7c = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_88);
  local_48 = local_98;
  uVar2 = FUN_140e634e0(param_1,param_2,&local_138,3,CONCAT44(uVar7,DAT_141a12628),&local_58);
  cVar1 = FUN_140e491e0(uVar2);
LAB_140ab93eb:
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (cVar1 != '\0') {
    uVar5 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar5 << 0x20;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

