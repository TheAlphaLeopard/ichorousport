// gml_Script_anon_7586____struct___546_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a98b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_7586____struct___546_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined4 uVar12;
  undefined8 *puVar11;
  ulonglong in_stack_fffffffffffffea0;
  longlong **pplVar13;
  ulonglong uVar14;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  byte local_12c;
  longlong local_128;
  byte local_11c;
  longlong *local_118;
  longlong *local_110;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined4 local_bc;
  longlong local_b8;
  undefined4 local_ac;
  longlong local_a8;
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_100 = "gml_Script_anon@7165@___struct___546@gml_Object_oEnemyWormBrute_Create_0";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x12d;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_138,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_48 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_14c = 0;
  local_158 = 0;
  local_e4 = 0;
  local_f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x12e;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar8 = (ulonglong)pcVar10 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_141a06528,0x80000000,&local_d8,uVar8,
                in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar8 >> 0x20);
  local_148 = local_d8;
  uStack_140 = uStack_d0;
  uStack_13c = uStack_cc;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_148);
  local_118 = &local_138;
  pplVar13 = &local_118;
  uVar8 = CONCAT44(uVar12,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_158,1,uVar8,pplVar13);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 != '\0') {
    local_f8 = 0x130;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
    plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    iVar3 = FUN_140e4a740(uVar6);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != &local_98) {
      local_148 = *plVar7;
      uStack_140 = (undefined4)plVar7[1];
      uStack_13c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_148);
    }
    uVar14 = (ulonglong)pplVar13 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a06528,0x80000000,&local_d8,uVar8,uVar14);
    FUN_140e86c30(&local_d8,DAT_1419fe0e8,0x80000000,&local_98);
    local_f8 = 0x131;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    iVar3 = FUN_140e4a740(uVar6);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != &local_a8) {
      local_148 = *plVar7;
      uStack_140 = (undefined4)plVar7[1];
      uStack_13c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_148);
    }
    (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
    FUN_140e87440(uVar5,DAT_141a06528,0x80000000,&local_d8,uVar8 & 0xffffffffffffff00,
                  uVar14 & 0xffffffffffffff00);
    FUN_140e86c30(&local_d8,DAT_1419fe158,0x80000000,&local_a8);
  }
  local_f8 = 0x134;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f21a8);
  plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2318);
  if (plVar7 != &local_138) {
    local_148 = *plVar7;
    uStack_140 = (undefined4)plVar7[1];
    uStack_13c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_148);
  }
  local_118 = &local_138;
  local_148 = CONCAT44(uRam0000000141dc6fe4,_DAT_141dc6fe0);
  uStack_140 = uRam0000000141dc6fe8;
  uStack_13c = uRam0000000141dc6fec;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_148);
  local_110 = &local_128;
  FUN_140e63610(param_1,param_2,&local_158,2,uVar5,&local_118);
  local_f8 = 0x135;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f21b8);
  if (plVar7 != &local_138) {
    local_148 = *plVar7;
    uStack_140 = (undefined4)plVar7[1];
    uStack_13c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_148);
  }
  local_118 = &local_138;
  FUN_140e63610(param_1,param_2,&local_158,1,uVar5,&local_118);
  local_f8 = 0x136;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
  plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  iVar3 = FUN_140e4a740(uVar5);
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar7 != &local_b8) {
    local_148 = *plVar7;
    uStack_140 = (undefined4)plVar7[1];
    uStack_13c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_148);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_b8);
  local_f8 = 0x137;
  plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  iVar3 = FUN_140e4a740(uVar5);
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar7 != &local_c8) {
    local_148 = *plVar7;
    uStack_140 = (undefined4)plVar7[1];
    uStack_13c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_148);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_c8);
  local_f8 = 0x139;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  uVar14 = 0;
  FUN_140e63610(param_1,param_2,&local_158,0,uVar8,0);
  local_f8 = 0x13b;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  (**(code **)(*param_1 + 8))(param_1,DAT_1419f2318);
  (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_58,uVar8,uVar14 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar8 >> 0x20);
  local_148 = CONCAT44(uRam0000000141dc6fe4,_DAT_141dc6fe0);
  uStack_140 = uRam0000000141dc6fe8;
  uStack_13c = uRam0000000141dc6fec;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_148);
  local_118 = &local_138;
  pplVar13 = &local_118;
  puVar11 = (undefined8 *)CONCAT44(uVar12,DAT_141a0a0d8);
  puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,puVar11,pplVar13);
  local_7c = *(undefined4 *)((longlong)puVar9 + 0xc);
  local_80 = *(undefined4 *)(puVar9 + 1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *puVar9;
  }
  else {
    FUN_1400419b0(&local_88,puVar9);
  }
  uStack_13c = 0;
  local_148 = 0x3ff4000000000000;
  FUN_140042560(&local_88,&local_148);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uVar4 = FUN_140e851f0(&local_58,&local_88,DAT_141955260,1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (uVar4 < 0x80000000) {
    local_f8 = 0x13c;
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    local_f0 = 0;
    local_e8 = 0;
    local_e4 = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_68,(ulonglong)puVar11 & 0xffffffffffffff00,
                  (ulonglong)pplVar13 & 0xffffffffffffff00);
    local_148 = CONCAT44(DAT_141dd90d8._4_4_,(undefined4)DAT_141dd90d8);
    uStack_140 = DAT_141dd90e0;
    uStack_13c = DAT_141dd90e4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
    local_110 = &local_128;
    uVar5 = FUN_140069500(uVar5);
    pplVar13 = &local_110;
    puVar11 = &local_68;
    FUN_140e63610(uVar5,param_2,&local_f0,1,puVar11,pplVar13);
  }
  local_f8 = 0x13e;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_78,(ulonglong)puVar11 & 0xffffffffffffff00,
                (ulonglong)pplVar13 & 0xffffffffffffff00);
  FUN_1400460e0(&local_78,local_48);
  FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_78);
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

