// gml_Object_oTrailerIcon_Draw_64 @ 0x140dd1580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oTrailerIcon_Draw_64
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar9;
  undefined8 **ppuVar7;
  ulonglong uVar8;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  double local_178;
  uint local_16c;
  double local_168;
  uint local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  char *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_108 = "gml_Script_anon@238@gml_Object_oTrailerIcon_Create_0";
  local_110 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_110;
  local_100 = 0x12;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_f8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_15c = 0;
  local_168 = 0.0;
  local_100 = 0x15;
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140dd16c3:
    local_138 = *puVar4;
    uStack_130 = puVar4[1];
    if ((1 << ((byte)_local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_f8) goto LAB_140dd16c3;
  }
  local_128 = &local_f8;
  uVar8 = CONCAT44(uVar9,DAT_141a0aa48);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_188,1,uVar8,&local_128);
  if (puVar4 != &local_88) {
    local_138 = *puVar4;
    uStack_130 = puVar4[1];
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_138);
  }
  local_100 = 0x16;
  uStack_130 = CONCAT44(0xd,(undefined4)uStack_130);
  local_138 = 0;
  local_78 = (undefined1 *)0x0;
  uStack_70 = uStack_130;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_78);
  do {
    uVar9 = (undefined4)(uVar8 >> 0x20);
    local_100 = 0x1a;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_140dd17f8:
      local_158 = *(undefined4 *)puVar4;
      uStack_154 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_150 = *(undefined4 *)(puVar4 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)_local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_158);
    }
    else {
      puVar4 = (undefined8 *)*param_5;
      if (puVar4 != &local_f8) goto LAB_140dd17f8;
    }
    local_128 = &local_f8;
    uVar5 = FUN_140e634e0(param_1,param_2,&local_188,1,CONCAT44(uVar9,DAT_1419f3378),&local_128);
    uVar2 = FUN_140e851f0(&local_168,uVar5,DAT_141955260,1);
    if (uVar2 < 0x80000000) {
      local_100 = 0x1c;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      local_120 = &local_88;
      local_158 = _DAT_141ddbbd8;
      uStack_154 = uRam0000000141ddbbdc;
      uStack_150 = uRam0000000141ddbbe0;
      uStack_14c = DAT_141ddbbe4;
      if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_158);
      local_118 = local_d8;
      uVar5 = FUN_14022ffd0(param_1,param_2,&local_c8,2,&local_120);
      uStack_70 = uStack_70 & 0xffffffff;
      local_78 = &DAT_bff0000000000000;
      iVar3 = FUN_140e851f0(uVar5,&local_78,DAT_141955260,0);
      if ((1 << ((byte)(uStack_70 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_13c = 0xd;
      if (iVar3 == 0) {
        local_148 = 0;
      }
      else {
        local_148 = 0x3ff0000000000000;
      }
      local_100 = 0x1e;
      cVar1 = FUN_140e491e0(&local_148);
      if (cVar1 == '\0') {
        local_100 = 0x21;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        FUN_14040a500(param_1,param_2,&local_188,0,0);
      }
      else {
        local_100 = 0x1f;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        FUN_1403ed380(param_1,param_2,&local_188,0,0);
      }
    }
    local_100 = 0x24;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_140dd1a6a:
      local_158 = *(undefined4 *)puVar4;
      uStack_154 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_150 = *(undefined4 *)(puVar4 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)_local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_158);
    }
    else {
      puVar4 = (undefined8 *)*param_5;
      if (puVar4 != &local_f8) goto LAB_140dd1a6a;
    }
    local_128 = &local_f8;
    ppuVar7 = &local_128;
    puVar4 = (undefined8 *)gml_Script_current_ms(param_1,param_2,&local_188,1,ppuVar7);
    uVar9 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
    if (puVar4 != &local_98) {
      local_158 = *(undefined4 *)puVar4;
      uStack_154 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_150 = *(undefined4 *)(puVar4 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_158);
    }
    local_100 = 0x25;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_140dd1b39:
      local_158 = *(undefined4 *)puVar4;
      uStack_154 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_150 = *(undefined4 *)(puVar4 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)_local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_158);
    }
    else {
      puVar4 = (undefined8 *)*param_5;
      if (puVar4 != &local_f8) goto LAB_140dd1b39;
    }
    local_128 = &local_f8;
    local_120 = &local_98;
    ppuVar7 = &local_128;
    uVar8 = CONCAT44(uVar9,DAT_141a01138);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_188,2,uVar8,ppuVar7);
    if (puVar4 != &local_a8) {
      local_158 = *(undefined4 *)puVar4;
      uStack_154 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_150 = *(undefined4 *)(puVar4 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_158);
    }
    local_100 = 0x27;
    uVar2 = local_15c & 0xffffff;
    if (uVar2 == 0) {
LAB_140dd1c25:
      local_168 = local_168 + 1.0;
    }
    else {
      if (uVar2 == 1) {
        local_168 = (double)FUN_140e4b060(&local_168);
        local_15c = 0;
        goto LAB_140dd1c25;
      }
      if (uVar2 == 7) {
        local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_168 = (double)((longlong)local_168 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_15c = 0;
          goto LAB_140dd1c25;
        }
        FUN_140042910(&DAT_14172c3d8,&local_168,&local_168);
      }
    }
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_a8,DAT_141a0ab58,0x80000000,&local_68,uVar8,
                  (ulonglong)ppuVar7 & 0xffffffffffffff00);
    uStack_130 = uStack_130 & 0xffffffff;
    local_138 = 0;
    iVar3 = FUN_140e851f0(&local_68,&local_138,DAT_141955260,1);
    if ((1 << ((byte)(uStack_130 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    uVar9 = (undefined4)(uVar8 >> 0x20);
  } while (iVar3 < 1);
  local_100 = 0x2b;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  if ((param_4 < 1) || (puVar6 = (undefined8 *)*param_5, puVar6 != &local_f8)) {
    local_158 = *(undefined4 *)puVar6;
    uStack_154 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_150 = *(undefined4 *)(puVar6 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_158);
  }
  local_128 = &local_f8;
  local_120 = &local_98;
  ppuVar7 = &local_128;
  uVar8 = CONCAT44(uVar9,DAT_141a01138);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_188,2,uVar8,ppuVar7);
  if (puVar6 != &local_b8) {
    local_158 = *(undefined4 *)puVar6;
    uStack_154 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_150 = *(undefined4 *)(puVar6 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_158);
  }
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_b8,DAT_141a0ab58,0x80000000,&local_178,uVar8,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar8 >> 0x20);
  uVar2 = local_16c & 0xffffff;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      local_178 = (double)FUN_140e4b060(&local_178);
      local_178 = local_178 - 1.0;
      local_16c = 0;
      goto LAB_140dd1e21;
    }
    if (uVar2 == 7) {
      local_178 = (double)CONCAT44(local_178._4_4_,local_178._0_4_ + -1);
      goto LAB_140dd1e21;
    }
    if (uVar2 == 10) {
      local_178 = (double)((longlong)local_178 + -1);
      goto LAB_140dd1e21;
    }
    if (uVar2 != 0xd) {
      FUN_140042910(&DAT_14172c450,&local_178,&local_178);
      goto LAB_140dd1e21;
    }
    local_16c = 0;
  }
  local_178 = local_178 + -1.0;
LAB_140dd1e21:
  FUN_140e87930(&local_b8,DAT_141a0ab58,0x80000000,&local_178);
  local_100 = 0x2d;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  local_128 = &local_a8;
  puVar6 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_188,1,CONCAT44(uVar9,DAT_1419fd0c8),&local_128);
  if (puVar6 != param_3) {
    local_158 = *(undefined4 *)puVar6;
    uStack_154 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_150 = *(undefined4 *)(puVar6 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_158);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_110;
  return param_3;
}

