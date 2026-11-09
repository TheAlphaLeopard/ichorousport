// gml_Script_anon_8040____struct___548_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a99da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_8040____struct___548_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  longlong local_70;
  undefined4 local_64;
  longlong local_60;
  undefined4 local_54;
  undefined4 *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  local_80 = "gml_Script_anon@7729@___struct___548@gml_Object_oEnemyWormBrute_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x14f;
  _eh_vector_constructor_iterator_(local_a8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_54 = 0xffffff;
  local_60 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_34 = 0xffffff;
  local_40 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x150;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f21a8);
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2318);
  if (puVar5 != local_a8) {
    local_c8 = *puVar5;
    uStack_c4 = puVar5[1];
    uStack_c0 = puVar5[2];
    uStack_bc = puVar5[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_c8);
  }
  local_50 = local_a8;
  local_c8 = _DAT_141dc6fe0;
  uStack_c4 = uRam0000000141dc6fe4;
  uStack_c0 = uRam0000000141dc6fe8;
  uStack_bc = uRam0000000141dc6fec;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_c8);
  local_48 = local_98;
  FUN_140e63610(param_1,param_2,&local_d8,2,uVar4,&local_50);
  local_78 = 0x151;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f21b8);
  if (puVar5 != local_a8) {
    local_c8 = *puVar5;
    uStack_c4 = puVar5[1];
    uStack_c0 = puVar5[2];
    uStack_bc = puVar5[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_c8);
  }
  local_50 = local_a8;
  FUN_140e63610(param_1,param_2,&local_d8,1,uVar4,&local_50);
  local_78 = 0x152;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2468);
  FUN_140e63610(param_1,param_2,&local_d8,0,uVar4,0);
  local_78 = 0x153;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  iVar3 = FUN_140e4a740(uVar4);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar6 != &local_60) {
    local_c8 = (undefined4)*plVar6;
    uStack_c4 = *(undefined4 *)((longlong)plVar6 + 4);
    uStack_c0 = (undefined4)plVar6[1];
    uStack_bc = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_60);
    }
    FUN_140041b80(&local_60,&local_c8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_60);
  local_78 = 0x154;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  iVar3 = FUN_140e4a740(uVar4);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar6 != &local_70) {
    local_c8 = (undefined4)*plVar6;
    uStack_c4 = *(undefined4 *)((longlong)plVar6 + 4);
    uStack_c0 = (undefined4)plVar6[1];
    uStack_bc = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_70);
    }
    FUN_140041b80(&local_70,&local_c8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_70);
  local_78 = 0x156;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_d8,0,uVar4,0);
  local_78 = 0x157;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
  FUN_140e63610(param_1,param_2,&local_d8,0,uVar4,0);
  local_78 = 0x159;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a096c8);
  uVar8 = 0;
  uVar4 = FUN_140e63610(param_1,param_2,&local_d8,0,uVar7,0);
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 != '\0') {
    local_78 = 0x15a;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_1419f2318);
    (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_40,uVar7 & 0xffffffffffffff00,
                  uVar8 & 0xffffffffffffff00);
    local_c8 = _DAT_141dd9058;
    uStack_c4 = uRam0000000141dd905c;
    uStack_c0 = uRam0000000141dd9060;
    uStack_bc = DAT_141dd9064;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_c8);
    local_50 = local_a8;
    uVar4 = FUN_140069500(uVar4);
    FUN_140e63610(uVar4,param_2,&local_b8,1,&local_40,&local_50);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

