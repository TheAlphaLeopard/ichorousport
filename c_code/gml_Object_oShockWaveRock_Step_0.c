// gml_Object_oShockWaveRock_Step_0 @ 0x140d6ba70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oShockWaveRock_Step_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong *local_res8;
  longlong *local_res10;
  uint local_res18;
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffe60;
  ulonglong uVar11;
  undefined1 **ppuVar12;
  undefined8 **ppuVar13;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  longlong local_e0;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_res18 = 0;
  local_110 = "gml_Object_oShockWave_Step_0";
  local_108 = 0;
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  pcVar8 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_16c = 0xffffff;
  local_178 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_108 = 4;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
  if (puVar4 != &local_c8) {
    local_198 = (longlong *)*puVar4;
    uStack_190 = *(undefined4 *)(puVar4 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)_local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_198);
  }
  uStack_17c = 0xf;
  local_188 = 0x10000000000002a;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  local_68 = &local_c8;
  FUN_140e87440(&local_188,DAT_1419fdae8,0x80000000,&local_78,uVar9,
                in_stack_fffffffffffffe60 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_e4 = 0;
  local_f0 = 0x3ff0000000000000;
  iVar2 = FUN_140e851f0(&local_78,&local_f0,DAT_141955260,0);
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if (iVar2 == 0) {
    uStack_18c = 0;
    local_198 = (longlong *)0x402c000000000000;
    puVar4 = &local_198;
    uVar7 = 1;
    local_res18 = 1;
  }
  else {
    uStack_11c = 0;
    local_128 = 0x4020000000000000;
    puVar4 = &local_128;
    uVar7 = 2;
    local_res18 = 2;
  }
  ppuVar13 = &local_68;
  uVar9 = CONCAT44(uVar10,DAT_1419fd658);
  puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_178,1,uVar9,ppuVar13);
  uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_180 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_188,puVar5);
  }
  local_res18 = uVar7 | 4;
  FUN_140046880(&local_188,puVar4);
  local_e4 = 0;
  local_f0 = 0;
  iVar2 = FUN_140e851f0(&local_188,&local_f0,DAT_141955260,0);
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  local_res18 = uVar7;
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (((uVar7 & 2) != 0) &&
     (uVar7 = uVar7 & 0xfffffff9, local_res18 = uVar7, (1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0
     )) {
    FUN_140041a50(&local_128);
  }
  if (((uVar7 & 1) != 0) &&
     (uVar7 = uVar7 & 0xfffffffe, local_res18 = uVar7, (1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0
     )) {
    FUN_140041a50(&local_198);
  }
  if (iVar2 == 0) {
    local_108 = 6;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uStack_18c = 6;
    local_198 = local_res8;
    uVar11 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_158,uVar9,uVar11);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uStack_18c = 6;
    local_198 = local_res8;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_168,uVar9,uVar11 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar9 >> 0x20);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = (longlong *)local_158;
    uStack_190 = uStack_150;
    uStack_18c = uStack_14c;
    if ((1 << ((byte)_local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_198);
    local_60 = local_b8;
    local_198 = (longlong *)local_168;
    uStack_190 = uStack_160;
    uStack_18c = uStack_15c;
    if ((1 << ((byte)_local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_198);
    local_58 = local_a8;
    local_198 = (longlong *)CONCAT44(uRam0000000141ddb64c,_DAT_141ddb648);
    uStack_190 = uRam0000000141ddb650;
    uStack_18c = DAT_141ddb654;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_198);
    local_50 = local_98;
    uStack_18c = 0xf;
    local_198 = (longlong *)0x100000000000112;
    local_128 = 0x100000000000112;
    uStack_120 = uStack_190;
    uStack_11c = 0xf;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_128);
    local_48 = local_88;
    ppuVar12 = &local_60;
    uVar9 = CONCAT44(uVar10,DAT_141a0a7c8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_148,4,uVar9,ppuVar12);
    iVar2 = FUN_140e63cb0(&local_f0,&local_res8,&local_res10,uVar6);
    if (0 < iVar2) {
      do {
        local_108 = 8;
        puVar4 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a1eed0);
        if (puVar4 != &local_138) {
          local_198 = (longlong *)*puVar4;
          uStack_190 = *(undefined4 *)(puVar4 + 1);
          uStack_18c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          FUN_140041b80(&local_138,&local_198);
        }
        FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_138);
        cVar1 = FUN_140e643f0(&local_f0,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(&local_f0,&local_res8,&local_res10);
    local_108 = 0xb;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
    uStack_18c = 6;
    local_198 = local_res8;
    ppuVar13 = (undefined8 **)((ulonglong)ppuVar12 & 0xffffffffffffff00);
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_100,uVar9,ppuVar13);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uStack_17c = 0;
    local_188 = 0x4030000000000000;
    local_res18 = uVar7 | 8;
    FUN_140042560(&local_188,uVar6);
    FUN_1400460e0(&local_100,&local_188);
    local_res18 = uVar7;
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_100);
    if (local_e0 != 0) {
      FUN_140e4cd60();
    }
  }
  local_108 = 0xe;
  uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  FUN_140e609c0(local_res8);
  FUN_1400460e0(uVar6,uVar3);
  FUN_140e60910(1);
  local_108 = 0x11;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
  uStack_18c = 6;
  local_198 = local_res8;
  uVar11 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_158,uVar9,uVar11);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_18c = 6;
  local_198 = local_res8;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_168,uVar9,uVar11 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_17c = uStack_14c;
  uStack_180 = uStack_150;
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    local_188 = local_158;
  }
  else {
    FUN_1400419b0(&local_188,&local_158);
  }
  local_res18 = uVar7 | 0x10;
  FUN_1400460e0(&local_188,uVar3);
  local_198 = (longlong *)local_188;
  uStack_190 = uStack_180;
  uStack_18c = uStack_17c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_198);
  local_res18 = uVar7;
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = uStack_15c;
  uStack_180 = uStack_160;
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_188 = local_168;
    local_68 = &local_c8;
  }
  else {
    local_68 = &local_c8;
    FUN_1400419b0(&local_188,&local_168);
  }
  local_res18 = uVar7 | 0x20;
  uStack_18c = 7;
  local_198 = (longlong *)CONCAT44(local_198._4_4_,1);
  FUN_1400462a0(&local_188,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = (longlong *)local_188;
  uStack_190 = uStack_180;
  uStack_18c = uStack_17c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_198);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_60 = local_b8;
  uStack_18c = 0xf;
  local_198 = (longlong *)0x100000000000149;
  local_128 = 0x100000000000149;
  uStack_120 = uStack_190;
  uStack_11c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_128);
  local_58 = local_a8;
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_178,3,CONCAT44(uVar10,DAT_141a12628),&local_68
                       );
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_108 = 0x13;
    FUN_140edd0e0(local_res8,local_res10,0,0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return;
}

