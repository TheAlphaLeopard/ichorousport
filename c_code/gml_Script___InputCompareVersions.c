// gml_Script___InputCompareVersions @ 0x14006cc80

undefined8 *
gml_Script___InputCompareVersions
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_50;
  byte local_44;
  undefined8 local_40;
  byte local_34;
  
  local_60 = 
  "gml_Script_anon@2664@_funcSplit@anon@1903@__InputCompareVersions@__InputCompareVersions";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x55;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x57;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_14006cd50:
    local_88 = *puVar3;
    uStack_80 = *(undefined4 *)(puVar3 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_40);
    }
    FUN_140041b80(&local_40,&local_88);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_40) goto LAB_14006cd50;
  }
  local_70 = &local_40;
  uVar5 = CONCAT44(uVar6,DAT_1419fdc48);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_a8,1,uVar5,&local_70);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar3 != &local_98) {
    local_88 = *puVar3;
    uStack_80 = *(undefined4 *)(puVar3 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_88);
  }
  local_58 = 0x58;
  uStack_7c = 0;
  local_88 = 0x4048000000000000;
  uVar1 = FUN_140e851f0(&local_98,&local_88,DAT_141955260,1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (uVar1 < 0x80000000) {
    uStack_7c = 0;
    local_88 = 0x404c800000000000;
    iVar2 = FUN_140e851f0(&local_98,&local_88,DAT_141955260,1);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if (iVar2 == -2 || 0 < iVar2) goto LAB_14006ce91;
  }
  else {
LAB_14006ce91:
    uStack_7c = 0;
    local_88 = 0x4047000000000000;
    iVar2 = FUN_140e851f0(&local_98,&local_88,DAT_141955260,0);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if (iVar2 != 0) goto LAB_14006cfca;
  }
  local_58 = 0x5a;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fedb8);
  if (puVar3 != &local_50) {
    local_88 = *puVar3;
    uStack_80 = *(undefined4 *)(puVar3 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_50);
    }
    FUN_140041b80(&local_50,&local_88);
  }
  local_78 = &local_50;
  if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_40)) {
    local_88 = *puVar4;
    uStack_80 = *(undefined4 *)(puVar4 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_40);
    }
    FUN_140041b80(&local_40,&local_88);
  }
  local_70 = &local_40;
  FUN_140e634e0(param_1,param_2,&local_a8,2,CONCAT44(uVar6,DAT_1419fe568),&local_78);
LAB_14006cfca:
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

