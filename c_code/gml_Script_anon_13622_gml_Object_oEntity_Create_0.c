// gml_Script_anon_13622_gml_Object_oEntity_Create_0 @ 0x140ab94a0

longlong *
gml_Script_anon_13622_gml_Object_oEntity_Create_0
          (longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
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
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  
  local_110 = "gml_Script_anon@12944@gml_Object_oEntity_Create_0";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x25c;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_f8,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_11c = 0;
  uVar8 = 0;
  local_128 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x25e;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140ab957b:
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_148);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_d8) goto LAB_140ab957b;
  }
  local_68 = &local_d8;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
LAB_140ab95c7:
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_148);
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
    if (puVar4 != &local_c8) goto LAB_140ab95c7;
  }
  local_60 = &local_c8;
  uStack_13c = 0xf;
  local_148 = 0x100000000000149;
  local_138 = 0x149;
  uStack_134 = 0x1000000;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_138);
  local_58 = local_b8;
  uVar5 = CONCAT44(uVar9,DAT_141a10408);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_128,3,uVar5,&local_68);
  uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    bVar7 = true;
    goto LAB_140ab981a;
  }
  bVar7 = false;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140ab96cc:
    local_138 = *(undefined4 *)puVar4;
    uStack_134 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_130 = *(undefined4 *)(puVar4 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_138);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_a8) goto LAB_140ab96cc;
  }
  local_50 = &local_a8;
  if ((param_4 < 2) || (puVar6 = (undefined8 *)param_5[1], puVar6 != &local_98)) {
    local_138 = *(undefined4 *)puVar6;
    uStack_134 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_130 = *(undefined4 *)(puVar6 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_138);
  }
  local_48 = &local_98;
  uStack_13c = 0xf;
  local_148 = 0x1000000000000ea;
  local_138 = 0xea;
  uStack_134 = 0x1000000;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_138);
  local_40 = local_88;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_158,3,CONCAT44(uVar9,DAT_141a10408),&local_50);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
    iVar2 = FUN_140e851f0(uVar3,uVar5,DAT_141955260,1);
    if (iVar2 == -2) {
      bVar7 = false;
    }
    else {
      bVar7 = -1 < iVar2;
    }
  }
LAB_140ab981a:
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (bVar7) {
    uVar8 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar8 << 0x20;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

