// gml_Script_anon_8701_gml_Object_oBossEmbraceHalf_Create_0 @ 0x140765040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_8701_gml_Object_oBossEmbraceHalf_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar13;
  double dVar12;
  code *pcVar14;
  double local_e8;
  uint local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  longlong local_80 [2];
  double local_70;
  byte local_64;
  longlong *local_60;
  double *local_58 [6];
  
  local_90 = "gml_Script_anon@7298@gml_Object_oBossEmbraceHalf_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0xe3;
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_bc = 0;
  local_c8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0xe4;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07428);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07428);
  uStack_cc = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_d8,puVar7);
  }
  FUN_1400462a0(&local_d8,uVar6);
  local_a8 = (undefined4)local_d8;
  uStack_a4 = local_d8._4_4_;
  uStack_a0 = uStack_d0;
  uStack_9c = uStack_cc;
  if ((1 << ((byte)local_80[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_a8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_60 = local_80;
  local_a8 = _DAT_141dc6980;
  uStack_a4 = uRam0000000141dc6984;
  uStack_a0 = uRam0000000141dc6988;
  uStack_9c = uRam0000000141dc698c;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  FUN_140041b80(&local_70,&local_a8);
  local_58[0] = &local_70;
  FUN_140e609c0(param_1);
  puVar9 = (undefined4 *)FUN_140e79090(&local_c8,2,&local_60);
  if (puVar9 != puVar8) {
    local_a8 = *puVar9;
    uStack_a4 = puVar9[1];
    uStack_a0 = puVar9[2];
    uStack_9c = puVar9[3];
    if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_a8);
  }
  FUN_140e60910(1);
  local_88 = 0xe6;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  uVar11 = 0;
  uVar13 = 0;
  local_e8 = 0.0;
  bVar2 = true;
  do {
    dVar12 = (double)CONCAT44(uVar13,uVar11);
    uVar11 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    if (!bVar2) {
      local_88 = 0xe6;
      uVar4 = local_dc & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_e8 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_e8 = (double)((longlong)local_e8 + 1);
          }
          else {
            if (uVar4 == 0xd) goto LAB_1407652e6;
            FUN_140042910(&DAT_14172c3d8,&local_e8,&local_e8);
          }
          goto LAB_1407652f4;
        }
        dVar12 = (double)FUN_140e4b060(&local_e8);
LAB_1407652e6:
        local_dc = 0;
      }
      local_e8 = dVar12 + 1.0;
    }
LAB_1407652f4:
    bVar2 = false;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06e18);
    iVar5 = FUN_140e851f0(&local_e8,uVar6,DAT_141955260,1);
    if ((iVar5 == -2) || (-1 < iVar5)) goto LAB_140765581;
    local_88 = 0xe7;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06e38);
    iVar5 = FUN_140e4a740(&local_e8);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar10 != local_80) {
      local_a8 = (undefined4)*plVar10;
      uStack_a4 = *(undefined4 *)((longlong)plVar10 + 4);
      uStack_a0 = (undefined4)plVar10[1];
      uStack_9c = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << ((byte)local_80[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_80);
      }
      FUN_140041b80(local_80,&local_a8);
    }
    local_60 = local_80;
    pcVar14 = (code *)CONCAT44(uVar11,DAT_141a02ef8);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_c8,1,pcVar14,&local_60);
    cVar3 = FUN_140e491e0(uVar6);
    if (cVar3 == '\0') {
      local_88 = 0xe8;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07428);
      uStack_cc = 0;
      local_d8 = 0;
      iVar5 = FUN_140e851f0(uVar6,&local_d8,DAT_141955260,1);
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if (iVar5 != -2 && iVar5 < 1) {
        local_88 = 0xe9;
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        local_b8 = 0;
        local_b0 = 0;
        local_ac = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08598);
        local_58[0] = &local_e8;
        FUN_140e63610(param_1,param_2,&local_b8,1,uVar6,local_58);
        local_88 = 0xea;
        puVar8 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07cb8);
        puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07428);
        FUN_140e609c0(param_1);
        if (puVar8 != puVar9) {
          local_a8 = *puVar8;
          uStack_a4 = puVar8[1];
          uStack_a0 = puVar8[2];
          uStack_9c = puVar8[3];
          if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar9);
          }
          FUN_140041b80(puVar9,&local_a8);
        }
        FUN_140e60910(1);
      }
      local_88 = 0xec;
LAB_140765581:
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      _eh_vector_destructor_iterator_(local_80,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_98;
      return param_3;
    }
    uVar11 = SUB84(local_e8,0);
    uVar13 = (undefined4)((ulonglong)local_e8 >> 0x20);
  } while( true );
}

