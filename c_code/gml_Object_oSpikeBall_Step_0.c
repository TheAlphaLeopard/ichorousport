// gml_Object_oSpikeBall_Step_0 @ 0x140d95520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSpikeBall_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  double *pdVar5;
  double *pdVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_b0 = "gml_Object_oSpewBubble_Step_0";
  local_a8 = 0;
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_a8 = 2;
  local_e8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_e0 = DAT_1419df7b8;
  uStack_dc = DAT_1419df7bc;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_e8);
  local_40 = local_60;
  local_e8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_e0 = DAT_1419df7b8;
  uStack_dc = DAT_1419df7bc;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_e8);
  local_38 = local_50;
  uVar3 = gml_Script_animcurve_lerp(param_1,param_2,&local_d8,2,&local_40);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_a8 = 4;
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  local_a8 = 8;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  local_e8 = (longlong *)CONCAT44(uRam00000001419ede64,_DAT_1419ede60);
  uStack_e0 = uRam00000001419ede68;
  uStack_dc = uRam00000001419ede6c;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_e8);
  local_40 = local_60;
  ppuVar11 = &local_40;
  uVar3 = gml_Script_choose_weighted(param_1,param_2,&local_d8,1,ppuVar11);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    uStack_dc = 6;
    ppuVar11 = (undefined1 **)((ulonglong)ppuVar11 & 0xffffffffffffff00);
    local_e8 = param_1;
    FUN_140e87440(&local_e8,DAT_141a0cfc8,0x80000000,&local_c8,ppuVar11,0);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    uStack_dc = 0;
    local_e8 = (longlong *)0x3ff0000000000000;
    iVar2 = FUN_140e851f0(&local_c8,&local_e8,DAT_141955260,1);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if (0 < iVar2) {
      uStack_dc = 6;
      ppuVar11 = (undefined1 **)((ulonglong)ppuVar11 & 0xffffffffffffff00);
      local_e8 = param_1;
      FUN_140e87440(&local_e8,DAT_141a0cfc8,0x80000000,&local_c8,ppuVar11,0);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      uStack_dc = 0;
      local_e8 = (longlong *)0x4014000000000000;
      iVar2 = FUN_140e851f0(&local_c8,&local_e8,DAT_141955260,1);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if (iVar2 != -2 && iVar2 < 1) {
        local_a8 = 10;
        if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_90);
        }
        local_84 = 0;
        local_90 = 0x4014000000000000;
        FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_90);
        local_a8 = 0xc;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f290);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        *puVar4 = 0;
      }
    }
  }
  local_a8 = 0x10;
  uStack_dc = 6;
  uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_141a0cfc8,0x80000000,&local_c8,uVar12,0);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uStack_dc = 0;
  local_e8 = (longlong *)0x4014000000000000;
  iVar2 = FUN_140e851f0(&local_c8,&local_e8,DAT_141955260,1);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if (iVar2 == -2 || 0 < iVar2) {
    local_a8 = 0x18;
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    local_94 = 0;
    local_a0 = 0x4000000000000000;
    puVar4 = &local_a0;
    uVar7 = DAT_141a0a818;
  }
  else {
    local_a8 = 0x12;
    pdVar5 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
    uStack_dc = 6;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_e8 = param_1;
    FUN_140e87440(&local_e8,DAT_1419fe0e8,0x80000000,&local_70,uVar12,0);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar9 = *pdVar6;
    }
    else {
      dVar9 = (double)FUN_140e4b060(pdVar6);
    }
    if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
      dVar10 = *pdVar5;
    }
    else {
      dVar10 = (double)FUN_140e4b060(pdVar5);
    }
    fVar8 = (float)FUN_140e78f90((float)dVar10,(float)dVar9);
    FUN_140162c50(&local_70,(double)fVar8);
    FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_70);
    local_a8 = 0x13;
    uStack_dc = 6;
    local_e8 = param_1;
    FUN_140e87440(&local_e8,DAT_1419fe158,0x80000000,&local_80,uVar12 & 0xffffffffffffff00,0);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar9 = *pdVar6;
    }
    else {
      dVar9 = (double)FUN_140e4b060(pdVar6);
    }
    if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
      dVar10 = *pdVar5;
    }
    else {
      dVar10 = (double)FUN_140e4b060(pdVar5);
    }
    fVar8 = (float)FUN_140e79010((float)dVar10,(float)dVar9);
    FUN_140162c50(&local_80,(double)fVar8);
    puVar4 = &local_80;
    uVar7 = DAT_1419fe158;
  }
  FUN_140e86fa0(param_1,uVar7,0x80000000,puVar4);
  local_a8 = 0x1b;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  FUN_140046040(uVar3);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return;
}

