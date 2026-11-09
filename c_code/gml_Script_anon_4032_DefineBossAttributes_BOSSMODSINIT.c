// gml_Script_anon_4032_DefineBossAttributes_BOSSMODSINIT @ 0x140239e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_4032_DefineBossAttributes_BOSSMODSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined4 local_res20;
  undefined4 uVar12;
  ulonglong uVar11;
  undefined1 **ppuVar13;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 local_70 [16];
  longlong local_60;
  
  local_res20 = 0;
  local_120 = "gml_Script_anon@3357@DefineBossAttributes@BOSSMODSINIT";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x94;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_e8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x96;
  if (param_4 < 1) {
    plVar5 = &DAT_1419df7b0;
  }
  else {
    plVar5 = (longlong *)*param_5;
  }
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  FUN_140e87170(plVar5,DAT_1419fe0e8,0x80000000,&local_f8,local_res8,local_res10);
  if (param_4 < 1) {
    plVar5 = &DAT_1419df7b0;
  }
  else {
    plVar5 = (longlong *)*param_5;
  }
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  plVar10 = local_res8;
  FUN_140e87170(plVar5,DAT_1419fe158,0x80000000,&local_108,local_res8,local_res10);
  uVar12 = (undefined4)((ulonglong)plVar10 >> 0x20);
  local_1b8 = local_f8;
  uStack_1b0 = uStack_f0;
  uStack_1ac = uStack_ec;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_1b8);
  local_90 = local_d8;
  local_1b8 = local_108;
  uStack_1b0 = uStack_100;
  uStack_1ac = uStack_fc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_1b8);
  local_88 = local_c8;
  local_1b8 = CONCAT44(uRam0000000141dcdeac,_DAT_141dcdea8);
  uStack_1b0 = uRam0000000141dcdeb0;
  uStack_1ac = DAT_141dcdeb4;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_1b8);
  local_80 = local_b8;
  uStack_1ac = 0xf;
  local_1b8 = 0x10000000000013c;
  local_198 = 0x10000000000013c;
  uStack_190 = uStack_1b0;
  uStack_18c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_198);
  local_78 = local_a8;
  ppuVar13 = &local_90;
  uVar11 = CONCAT44(uVar12,DAT_141a0a7c8);
  puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1a8,4,uVar11,ppuVar13);
  if (puVar4 != &local_148) {
    local_1b8 = *puVar4;
    uStack_1b0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1b8);
  }
  local_118 = 0x97;
  iVar3 = FUN_140e63cb0(local_70,&local_res8,&local_res10,&local_148);
  if (0 < iVar3) {
    do {
      local_118 = 0x99;
      plVar5 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
      FUN_140e609c0(local_res8);
      if (param_4 < 1) {
        plVar10 = &DAT_1419df7b0;
      }
      else {
        plVar10 = (longlong *)*param_5;
      }
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if (*(int *)(lVar1 + 0x24) < 1) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = *(longlong **)(lVar1 + 8);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar10 != plVar5) {
        local_188 = (undefined4)*plVar10;
        uStack_184 = *(undefined4 *)((longlong)plVar10 + 4);
        uStack_180 = (undefined4)plVar10[1];
        uStack_17c = *(undefined4 *)((longlong)plVar10 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar5);
        }
        FUN_140041b80(plVar5,&local_188);
      }
      FUN_140e60910(1);
      local_118 = 0x9b;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_141a05b88,0x80000000,&local_138,uVar11,
                    (ulonglong)ppuVar13 & 0xffffffffffffff00);
      uVar12 = (undefined4)(uVar11 >> 0x20);
      local_16c = DAT_141dcded4;
      local_170 = DAT_141dcded0;
      if ((1 << ((byte)DAT_141dcded4 & 0x1f) & 0x46U) == 0) {
        local_178 = DAT_141dcdec8;
      }
      else {
        FUN_1400419b0(&local_178,&DAT_141dcdec8);
      }
      uVar9 = 1 << ((byte)local_16c & 0x1f) & 0x46;
      uStack_190 = local_170;
      uStack_18c = local_16c;
      if (uVar9 == 0) {
        local_198 = local_178;
      }
      else {
        FUN_1400419b0(&local_198,&local_178);
      }
      local_res20 = 1;
      FUN_1400460e0(&local_198,&local_138);
      local_188 = (undefined4)local_198;
      uStack_184 = local_198._4_4_;
      uStack_180 = uStack_190;
      uStack_17c = uStack_18c;
      if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_188);
      local_res20 = 0;
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if (uVar9 != 0) {
        FUN_140041a50(&local_178);
      }
      ppuVar13 = &local_98;
      uVar11 = CONCAT44(uVar12,DAT_141a086f8);
      local_98 = local_e8;
      puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1a8,1,uVar11,ppuVar13);
      if (puVar4 != &local_158) {
        local_188 = *(undefined4 *)puVar4;
        uStack_184 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_180 = *(undefined4 *)(puVar4 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_158);
      local_118 = 0x9c;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      puVar7 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a43d78);
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_141a05b88,0x80000000,&local_138,uVar11,
                    (ulonglong)ppuVar13 & 0xffffffffffffff00);
      uVar12 = (undefined4)(uVar11 >> 0x20);
      local_15c = DAT_141dcdf04;
      local_160 = DAT_141dcdf00;
      if ((1 << ((byte)DAT_141dcdf04 & 0x1f) & 0x46U) == 0) {
        local_168 = DAT_141dcdef8;
      }
      else {
        FUN_1400419b0(&local_168,&DAT_141dcdef8);
      }
      uVar9 = 1 << ((byte)local_15c & 0x1f) & 0x46;
      uStack_1b0 = local_160;
      uStack_1ac = local_15c;
      if (uVar9 == 0) {
        local_1b8 = local_168;
      }
      else {
        FUN_1400419b0(&local_1b8,&local_168);
      }
      local_res20 = 2;
      FUN_1400460e0(&local_1b8,&local_138);
      local_188 = (undefined4)local_1b8;
      uStack_184 = local_1b8._4_4_;
      uStack_180 = uStack_1b0;
      uStack_17c = uStack_1ac;
      if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_188);
      local_res20 = 0;
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if (uVar9 != 0) {
        FUN_140041a50(&local_168);
      }
      local_98 = local_e8;
      FUN_140e609c0(local_res8);
      ppuVar13 = &local_98;
      uVar11 = CONCAT44(uVar12,DAT_141a086f8);
      puVar8 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_1a8,1,uVar11,ppuVar13);
      if (puVar8 != puVar7) {
        local_188 = *puVar8;
        uStack_184 = puVar8[1];
        uStack_180 = puVar8[2];
        uStack_17c = puVar8[3];
        if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_188);
      }
      FUN_140e60910(1);
      cVar2 = FUN_140e643f0(local_70,&local_res8,&local_res10);
    } while (cVar2 != '\0');
    param_3 = local_res18;
  }
  FUN_140e63970(local_70,&local_res8,&local_res10);
  if (local_60 != 0) {
    FUN_140e4cd60();
    local_60 = 0;
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

