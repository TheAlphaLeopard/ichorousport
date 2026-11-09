// gml_Object_oFogWisp_CleanUp_0 @ 0x140ae61a0

void gml_Object_oFogWisp_CleanUp_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong **pplVar7;
  ulonglong *puVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong *local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  
  local_90 = "gml_Object_oFogWisp_Step_0";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_74 = 0xffffff;
  local_80 = (longlong *)0x0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_88 = 1;
  puVar4 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2f88);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2e98);
  uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_e0 = (undefined4)puVar4[1];
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_e8,puVar4);
  }
  FUN_140042560(&local_e8,uVar3);
  FUN_1400460e0(uVar5,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_88 = 2;
  puVar4 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2f78);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2ec8);
  uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_e0 = (undefined4)puVar4[1];
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_e8,puVar4);
  }
  FUN_140042560(&local_e8,uVar3);
  FUN_1400460e0(uVar5,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_88 = 3;
  puVar4 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2fa8);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2fd8);
  uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_e0 = (undefined4)puVar4[1];
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_e8,puVar4);
  }
  FUN_140042560(&local_e8,uVar3);
  FUN_1400460e0(uVar5,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_88 = 5;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2e98);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2f58);
  if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
    uVar9 = (undefined4)*puVar6;
  }
  else {
    uVar9 = FUN_140e4b060(puVar6);
  }
  FUN_140e78ee0(uVar9);
  local_c8 = (longlong *)thunk_FUN_1412ac390();
  uStack_bc = 0;
  FUN_140042560(&local_c8,uVar5);
  local_d8 = local_c8;
  uStack_d0 = uStack_c0;
  uStack_cc = uStack_bc;
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  FUN_140041b80(&local_80,&local_d8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_88 = 6;
  puVar4 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2f48);
  pplVar7 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2ea8);
  FUN_140e609c0(param_1);
  uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_e0 = (undefined4)puVar4[1];
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_e8,puVar4);
  }
  FUN_1400460e0(&local_e8,&local_80);
  if (&local_e8 != pplVar7) {
    local_d8 = local_e8;
    uStack_d0 = uStack_e0;
    uStack_cc = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_d8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e60910(1);
  local_88 = 7;
  puVar4 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2ff8);
  pplVar7 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3048);
  FUN_140e609c0(param_1);
  uStack_bc = local_74;
  uStack_c0 = local_78;
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) == 0) {
    local_c8 = local_80;
  }
  else {
    FUN_1400419b0(&local_c8,&local_80);
  }
  uStack_cc = 0;
  local_d8 = (longlong *)0x3fd3333333333333;
  FUN_140042560(&local_c8,&local_d8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_e0 = (undefined4)puVar4[1];
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_e8,puVar4);
  }
  FUN_1400460e0(&local_e8,&local_c8);
  if (&local_e8 != pplVar7) {
    local_d8 = local_e8;
    uStack_d0 = uStack_e0;
    uStack_cc = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_d8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e60910(1);
  local_88 = 9;
  puVar4 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_cc = 6;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_b8,0,0);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_c0 = (undefined4)puVar4[1];
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_c8,puVar4);
  }
  FUN_140042560(&local_c8,uVar3);
  FUN_1400460e0(&local_b8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_b8);
  local_88 = 10;
  puVar8 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2fd8);
  uStack_cc = 6;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe158,0x80000000,&local_60,0,0);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
    uVar9 = (undefined4)*puVar6;
  }
  else {
    uVar9 = FUN_140e4b060(puVar6);
  }
  FUN_140e78ee0(uVar9);
  dVar1 = (double)thunk_FUN_1412ac390();
  uStack_dc = *(uint *)((longlong)puVar8 + 0xc);
  uStack_e0 = (undefined4)puVar8[1];
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = (longlong *)*puVar8;
  }
  else {
    FUN_1400419b0(&local_e8,puVar8);
  }
  FUN_140162c50(&local_e8,SUB84(dVar1 * 0.02,0));
  uStack_bc = uStack_dc;
  uStack_c0 = uStack_e0;
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_c8 = local_e8;
  }
  else {
    FUN_1400419b0(&local_c8,&local_e8);
  }
  FUN_140042560(&local_c8,uVar3);
  FUN_1400460e0(&local_60,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_60);
  local_88 = 0xc;
  uStack_cc = 0;
  local_d8 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(puVar4,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (0 < iVar2) {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2f48);
    puVar4 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    uStack_cc = 6;
    local_d8 = param_1;
    FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_70,0,0);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_a8);
    uStack_dc = local_9c;
    uStack_e0 = local_a0;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
      local_e8 = local_a8;
    }
    else {
      FUN_1400419b0(&local_e8,&local_a8);
    }
    FUN_1400460e0(&local_e8,uVar5);
    uStack_bc = uStack_dc;
    uStack_c0 = uStack_e0;
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
      local_c8 = local_e8;
    }
    else {
      FUN_1400419b0(&local_c8,&local_e8);
    }
    uStack_cc = 7;
    local_d8 = (longlong *)CONCAT44(local_d8._4_4_,4);
    FUN_1400460e0(&local_c8,&local_d8);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    iVar2 = FUN_140e851f0(&local_70,&local_c8,DAT_141955260,1);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if (0 < iVar2) {
      local_88 = 0xc;
      puVar8 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2f48);
      uStack_dc = *(uint *)((longlong)puVar8 + 0xc);
      uStack_e0 = (undefined4)puVar8[1];
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
        local_e8 = (longlong *)*puVar8;
      }
      else {
        FUN_1400419b0(&local_e8,puVar8);
      }
      uStack_cc = 7;
      local_d8 = (longlong *)CONCAT44(local_d8._4_4_,4);
      FUN_1400460e0(&local_e8,&local_d8);
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      plVar10 = local_e8;
      if ((uStack_dc & 0xffffff) != 0) {
        plVar10 = (longlong *)FUN_140e4b060(&local_e8);
      }
      local_d8 = (longlong *)((ulonglong)plVar10 ^ 0x8000000000000000);
      uStack_cc = 0;
      local_c8 = (longlong *)((ulonglong)plVar10 ^ 0x8000000000000000);
      uStack_c0 = uStack_d0;
      uStack_bc = 0;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_c8);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_b8);
    }
  }
  local_88 = 0xd;
  uStack_cc = 0;
  local_d8 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(puVar4,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (iVar2 != -2 && iVar2 < 0) {
    puVar4 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2f48);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    uStack_cc = 6;
    local_d8 = param_1;
    FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_70,0,0);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    uStack_dc = *(uint *)((longlong)puVar4 + 0xc);
    uStack_e0 = (undefined4)puVar4[1];
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
      local_e8 = (longlong *)*puVar4;
    }
    else {
      FUN_1400419b0(&local_e8,puVar4);
    }
    uStack_cc = 7;
    local_d8 = (longlong *)CONCAT44(local_d8._4_4_,4);
    FUN_1400460e0(&local_e8,&local_d8);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    plVar10 = local_e8;
    if ((uStack_dc & 0xffffff) != 0) {
      plVar10 = (longlong *)FUN_140e4b060(&local_e8);
    }
    uStack_bc = 0;
    local_c8 = (longlong *)((ulonglong)plVar10 ^ 0x8000000000000000);
    iVar2 = FUN_140e851f0(&local_70,&local_c8,DAT_141955260,1);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if (iVar2 != -2 && iVar2 < 0) {
      local_88 = 0xd;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2f48);
      FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_a8);
      uStack_dc = local_9c;
      uStack_e0 = local_a0;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
        local_e8 = local_a8;
      }
      else {
        FUN_1400419b0(&local_e8,&local_a8);
      }
      FUN_1400460e0(&local_e8,uVar5);
      uStack_bc = uStack_dc;
      uStack_c0 = uStack_e0;
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
        local_c8 = local_e8;
      }
      else {
        FUN_1400419b0(&local_c8,&local_e8);
      }
      uStack_cc = 7;
      local_d8 = (longlong *)CONCAT44(local_d8._4_4_,4);
      FUN_1400460e0(&local_c8,&local_d8);
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = local_c8;
      uStack_d0 = uStack_c0;
      uStack_cc = uStack_bc;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_d8);
      if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_b8);
    }
  }
  local_88 = 0xf;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
  FUN_140e609c0(param_1);
  FUN_1400462a0(uVar5,uVar3);
  FUN_140e60910(1);
  local_88 = 0x10;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5838);
  uStack_cc = 0;
  local_d8 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(uVar3,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (iVar2 != -2 && iVar2 < 1) {
    local_88 = 0x10;
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}

