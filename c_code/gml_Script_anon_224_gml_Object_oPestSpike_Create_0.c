// gml_Script_anon_224_gml_Object_oPestSpike_Create_0 @ 0x140bdd6c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_224_gml_Object_oPestSpike_Create_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 **ppuVar10;
  undefined8 **ppuVar11;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 local_50 [16];
  longlong local_40;
  
  local_res18 = 0;
  local_120 = "gml_Object_oPatronWave_Step_0";
  local_118 = 0;
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  uVar7 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_f8,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_15c = 0xffffff;
  local_168 = (longlong *)0x0;
  uStack_16c = 0xffffff;
  local_178 = (longlong *)0x0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_17c = 0xffffff;
  local_188 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_118 = 4;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
  if (puVar5 != &local_f8) {
    local_198 = (longlong *)*puVar5;
    uStack_190 = *(undefined4 *)(puVar5 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)_local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_198);
  }
  local_88 = &local_f8;
  ppuVar11 = &local_88;
  uVar8 = CONCAT44(uVar7,DAT_1419fd658);
  puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_188,1,uVar8,ppuVar11);
  if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
    uVar7 = (undefined4)*puVar5;
  }
  else {
    uVar7 = FUN_140e4b060(puVar5);
  }
  dVar1 = (double)FUN_1412a79b0(uVar7);
  if (dVar1 == 0.0) {
    local_118 = 6;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uStack_19c = 6;
    local_1a8 = local_res8;
    uVar9 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_168,uVar8,uVar9);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uStack_19c = 6;
    local_1a8 = local_res8;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_178,uVar8,uVar9 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_198 = local_168;
    uStack_190 = uStack_160;
    uStack_18c = uStack_15c;
    if ((1 << ((byte)_local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_198);
    local_80 = local_e8;
    local_198 = local_178;
    uStack_190 = uStack_170;
    uStack_18c = uStack_16c;
    if ((1 << ((byte)_local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_198);
    local_198 = (longlong *)CONCAT44(uRam0000000141dda42c,_DAT_141dda428);
    uStack_190 = uRam0000000141dda430;
    uStack_18c = DAT_141dda434;
    local_78 = local_d8;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_198);
    local_70 = local_c8;
    uStack_18c = 0xf;
    local_198 = (longlong *)0x1000000000000dc;
    local_1a8 = (longlong *)0x1000000000000dc;
    uStack_1a0 = uStack_190;
    uStack_19c = 0xf;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1a8);
    local_68 = local_b8;
    ppuVar10 = &local_80;
    uVar8 = CONCAT44(uVar7,DAT_141a0a7c8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_148,4,uVar8,ppuVar10);
    iVar3 = FUN_140e63cb0(local_50,&local_res8,&local_res10,uVar6);
    if (0 < iVar3) {
      do {
        local_118 = 8;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        local_198 = (longlong *)CONCAT44(uRam00000001419ec9b4,_DAT_1419ec9b0);
        uStack_190 = uRam00000001419ec9b8;
        uStack_18c = uRam00000001419ec9bc;
        if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_198);
        local_60 = local_a8;
        local_198 = (longlong *)CONCAT44(uRam00000001419ec9c4,_DAT_1419ec9c0);
        uStack_190 = uRam00000001419ec9c8;
        uStack_18c = uRam00000001419ec9cc;
        if ((1 << (local_98[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_198);
        local_58 = local_98;
        puVar5 = (undefined8 *)FUN_140e78db0(&local_158,2,&local_60);
        if (puVar5 != &local_138) {
          local_198 = (longlong *)*puVar5;
          uStack_190 = *(undefined4 *)(puVar5 + 1);
          uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          FUN_140041b80(&local_138,&local_198);
        }
        FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_138);
        cVar2 = FUN_140e643f0(local_50,&local_res8,&local_res10);
      } while (cVar2 != '\0');
    }
    FUN_140e63970(local_50,&local_res8,&local_res10);
    local_118 = 0xb;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
    uStack_19c = 6;
    local_1a8 = local_res8;
    ppuVar11 = (undefined8 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_110,uVar8,ppuVar11);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uStack_19c = 0;
    local_1a8 = (longlong *)0x4048000000000000;
    local_res18 = 1;
    FUN_140042560(&local_1a8,uVar6);
    FUN_1400460e0(&local_110,&local_1a8);
    local_res18 = 0;
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_110);
    if (local_40 != 0) {
      FUN_140e4cd60();
    }
  }
  local_118 = 0xe;
  uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  FUN_140e609c0(local_res8);
  FUN_1400460e0(uVar6,uVar4);
  FUN_140e60910(1);
  local_118 = 0x12;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
  uStack_19c = 6;
  local_1a8 = local_res8;
  uVar9 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_168,uVar8,uVar9);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  local_1a8 = local_res8;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_178,uVar8,uVar9 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar8 >> 0x20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = uStack_15c;
  uStack_1a0 = uStack_160;
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_1a8 = local_168;
  }
  else {
    FUN_1400419b0(&local_1a8,&local_168);
  }
  local_res18 = 2;
  FUN_1400460e0(&local_1a8,uVar4);
  local_198 = local_1a8;
  uStack_190 = uStack_1a0;
  uStack_18c = uStack_19c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_198);
  local_res18 = 0;
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_88 = &local_f8;
  uStack_19c = uStack_16c;
  uStack_1a0 = uStack_170;
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_1a8 = local_178;
  }
  else {
    FUN_1400419b0(&local_1a8,&local_178);
  }
  local_res18 = 4;
  uStack_18c = 7;
  local_198 = (longlong *)CONCAT44(local_198._4_4_,1);
  FUN_1400462a0(&local_1a8,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = local_1a8;
  uStack_190 = uStack_1a0;
  uStack_18c = uStack_19c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_198);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_80 = local_e8;
  uStack_18c = 0xf;
  local_198 = (longlong *)0x100000000000149;
  local_1a8 = (longlong *)0x100000000000149;
  uStack_1a0 = uStack_190;
  uStack_19c = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_1a8);
  local_78 = local_d8;
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_188,3,CONCAT44(uVar7,DAT_141a12628),&local_88)
  ;
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 != '\0') {
    local_118 = 0x14;
    FUN_140edd0e0(local_res8,local_res10,0,0);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return;
}

