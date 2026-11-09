// gml_Object_oFogWisp_Step_0 @ 0x140ae3be0

void gml_Object_oFogWisp_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  code *pcVar11;
  ulonglong uVar12;
  ulonglong in_stack_fffffffffffffe60;
  longlong *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  double local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  uint local_114;
  undefined8 local_110;
  uint local_104;
  undefined8 local_100;
  uint local_f4;
  undefined8 local_f0;
  uint local_e4;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res18 = 0;
  local_130 = "gml_Object_oFlyZone_Step_0";
  local_128 = 0;
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  pcVar11 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_16c = 0xffffff;
  local_178 = 0;
  local_128 = 2;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
  uStack_17c = 0;
  local_188 = 0.0;
  iVar2 = FUN_140e851f0(uVar4,&local_188,DAT_141955260,1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (iVar2 != -2 && iVar2 < 1) {
    local_128 = 4;
    pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1d8a0);
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
    uStack_17c = *(uint *)((longlong)pdVar5 + 0xc);
    uStack_180 = *(undefined4 *)(pdVar5 + 1);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
      local_188 = *pdVar5;
    }
    else {
      FUN_1400419b0(&local_188,pdVar5);
    }
    local_res18 = 1;
    uStack_18c = 0;
    local_198 = (longlong *)0x4000000000000000;
    FUN_140046500(&local_188,&local_198);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uVar4 = FUN_140e4a8b0(pdVar5);
    dVar10 = local_188;
    if ((uStack_17c & 0xffffff) != 0) {
      dVar10 = (double)FUN_140e4b060(&local_188);
    }
    uVar4 = FUN_140e78f40((longlong)dVar10,uVar4);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = uVar4;
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_128 = 6;
    uStack_18c = 6;
    local_198 = local_res8;
    in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffffffffffff00;
    uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_198,DAT_141a0a808,0x80000000,&local_f0,uVar12,in_stack_fffffffffffffe60);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uStack_18c = 6;
    local_198 = local_res8;
    in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_198,DAT_141a0a798,0x80000000,&local_100,uVar12,in_stack_fffffffffffffe60);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if ((local_f4 & 0xffffff) == 0) {
      uVar7 = (undefined4)local_100;
    }
    else {
      uVar7 = FUN_140e4b060(&local_100);
    }
    if ((local_e4 & 0xffffff) == 0) {
      uVar8 = (undefined4)local_f0;
    }
    else {
      uVar8 = FUN_140e4b060(&local_f0);
    }
    uVar4 = FUN_140e794b0(uVar8,uVar7);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_13c = 0;
    local_128 = 7;
    uStack_18c = 6;
    local_198 = local_res8;
    in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_148 = uVar4;
    FUN_140e87440(&local_198,DAT_141a0a788,0x80000000,&local_110,uVar12,in_stack_fffffffffffffe60);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uStack_18c = 6;
    local_198 = local_res8;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_198,DAT_141a101f8,0x80000000,&local_120,uVar12,
                  in_stack_fffffffffffffe60 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar12 >> 0x20);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if ((local_114 & 0xffffff) == 0) {
      uVar8 = (undefined4)local_120;
    }
    else {
      uVar8 = FUN_140e4b060(&local_120);
    }
    if ((local_104 & 0xffffff) == 0) {
      uVar9 = (undefined4)local_110;
    }
    else {
      uVar9 = FUN_140e4b060(&local_110);
    }
    uVar4 = FUN_140e794b0(uVar9,uVar8);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_14c = 0;
    local_128 = 8;
    local_158 = uVar4;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419efb88);
    local_98 = &local_148;
    local_90 = &local_158;
    if (puVar6 != &local_b8) {
      local_198 = (longlong *)*puVar6;
      uStack_190 = *(undefined4 *)(puVar6 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_198);
    }
    local_88 = &local_b8;
    uStack_18c = 0xf;
    local_198 = (longlong *)0x1000000000000aa;
    local_188 = 7.291122019556673e-304;
    uStack_180 = uStack_190;
    uStack_17c = 0xf;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_188);
    local_80 = local_a8;
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_178,4,CONCAT44(uVar7,DAT_141a0a7c8),
                          &local_98);
    iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar4);
    if (0 < iVar2) {
      do {
        local_128 = 10;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
        uVar4 = FUN_140e79480(0);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = uVar4;
        local_128 = 0xb;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
        if (puVar6 != &local_168) {
          local_198 = (longlong *)*puVar6;
          uStack_190 = *(undefined4 *)(puVar6 + 1);
          uStack_18c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          FUN_140041b80(&local_168,&local_198);
        }
        FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_168);
        cVar1 = FUN_140e643f0(local_78,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_78,&local_res8,&local_res10);
    if (local_68 != 0) {
      FUN_140e4cd60();
    }
  }
  local_128 = 0x11;
  uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  FUN_140e609c0(local_res8);
  FUN_1400462a0(uVar4,uVar3);
  FUN_140e60910(1);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return;
}

