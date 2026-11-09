// gml_Script____struct___579_gml_Object_oLanceSpawn_Create_0 @ 0x140b38770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script____struct___579_gml_Object_oLanceSpawn_Create_0(longlong *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong **pplVar9;
  longlong **pplVar10;
  bool bVar11;
  ulonglong uVar12;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  longlong local_80;
  byte local_74;
  longlong local_70;
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  longlong *local_50;
  longlong *plStack_48;
  undefined1 *local_40;
  
  local_b0 = "gml_Object_oKnockAround_Step_0";
  local_a8 = 0;
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  _eh_vector_constructor_iterator_(&local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_a8 = 4;
  FUN_140e98b30(param_1,param_2);
  local_a8 = 6;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_d8,0,uVar5,0);
  local_a8 = 8;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (plVar6 != &local_80) {
    local_c8 = (longlong *)*plVar6;
    uStack_c0 = (undefined4)plVar6[1];
    uStack_bc = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_c8);
  }
  local_50 = &local_80;
  local_c8 = (longlong *)CONCAT44(uRam0000000141dc71f4,_DAT_141dc71f0);
  uStack_c0 = uRam0000000141dc71f8;
  uStack_bc = uRam0000000141dc71fc;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  FUN_140041b80(&local_70,&local_c8);
  plStack_48 = &local_70;
  uStack_dc = 0;
  local_e8 = (longlong *)0x3f947ae147ae147b;
  FUN_140042560(&local_e8,uVar4);
  local_c8 = local_e8;
  uStack_c0 = uStack_e0;
  uStack_bc = uStack_dc;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_c8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_40 = local_60;
  FUN_140e609c0(param_1);
  puVar8 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_d8,3,&local_50);
  if (puVar8 != puVar7) {
    local_c8 = (longlong *)*puVar8;
    uStack_c0 = *(undefined4 *)(puVar8 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_c8);
  }
  FUN_140e60910(1);
  local_a8 = 9;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_dc = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_e0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = (longlong *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_e8,puVar7);
  }
  FUN_140042560(&local_e8,uVar4);
  FUN_1400460e0(uVar5,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_a8 = 0xb;
  pplVar9 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  uStack_dc = 0xf;
  local_e8 = (longlong *)0x1000000000000ee;
  plVar6 = param_1;
  uVar12 = param_2;
  FUN_140e87170(&local_e8,DAT_1419fe0e8,0x80000000,&local_90,param_1,param_2);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uStack_dc = 6;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_1419fe0e8,0x80000000,&local_a0,(ulonglong)plVar6 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  iVar3 = FUN_140e851f0(&local_90,&local_a0,DAT_141955260,1);
  bVar11 = iVar3 == -2 || -1 < iVar3;
  if (bVar11) {
    uStack_dc = 0;
    local_e8 = (longlong *)0x3ff0000000000000;
    pplVar10 = &local_e8;
  }
  else {
    uStack_bc = 0;
    local_c8 = (longlong *)&DAT_bff0000000000000;
    pplVar10 = (longlong **)&local_c8;
  }
  uVar2 = uStack_bc;
  uVar1 = uStack_dc;
  FUN_140e609c0(param_1);
  if (pplVar10 != pplVar9) {
    local_50 = *pplVar10;
    plStack_48 = pplVar10[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar9);
    }
    FUN_140041b80(pplVar9,&local_50);
  }
  if ((bVar11) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_e8);
  }
  if ((iVar3 != -2 && -1 >= iVar3) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e60910(1);
  local_a8 = 0xd;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_d8,0,uVar4,0);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(&local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return;
}

