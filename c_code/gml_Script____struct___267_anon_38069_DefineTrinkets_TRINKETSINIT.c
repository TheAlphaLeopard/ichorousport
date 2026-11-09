// gml_Script____struct___267_anon_38069_DefineTrinkets_TRINKETSINIT @ 0x1406149c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___267_anon_38069_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar7;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_180 = "gml_Script_anon@37451@DefineTrinkets@TRINKETSINIT";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0x537;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_114 = 0xffffff;
  local_120 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_178 = 0x538;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  if (puVar3 != &local_b8) {
    local_1d8 = *puVar3;
    uStack_1d0 = *(undefined4 *)(puVar3 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_1d8);
  }
  local_58 = &local_b8;
  local_1d8 = CONCAT44(uRam0000000141dd4ebc,_DAT_141dd4eb8);
  uStack_1d0 = uRam0000000141dd4ec0;
  uStack_1cc = DAT_141dd4ec4;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_1d8);
  local_50 = local_a8;
  ppuVar8 = &local_58;
  uVar5 = CONCAT44(uVar7,DAT_1419fcba8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_1b8,2,uVar5,ppuVar8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_178 = 0x539;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    local_114 = 0;
    local_120 = 0;
    FUN_140e87930(uVar4,DAT_1419ffeb8,0x80000000,&local_120);
    local_178 = 0x53a;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_130);
    }
    local_124 = 0;
    local_130 = 0;
    FUN_140e87930(uVar4,DAT_1419ffc88,0x80000000,&local_130);
  }
  local_178 = 0x53d;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419ffc88,0x80000000,&local_1a8,uVar5,uVar9);
  uStack_1cc = 0;
  local_1d8 = 0;
  iVar2 = FUN_140e851f0(&local_1a8,&local_1d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (0 < iVar2) {
    local_178 = 0x53e;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    uStack_1cc = 0xf;
    local_1d8 = 0x1000000000000ee;
    uVar9 = uVar9 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(&local_1d8,DAT_1419f59c8,0x80000000,&local_d0,uVar5,uVar9);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uVar9 = uVar9 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419ffc88,0x80000000,&local_1a8,uVar5,uVar9);
    uStack_1cc = local_19c;
    uStack_1d0 = local_1a0;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
      local_1d8 = local_1a8;
    }
    else {
      FUN_1400419b0(&local_1d8,&local_1a8);
    }
    FUN_1400460e0(&local_d0,&local_1d8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uStack_1cc = 0xf;
    local_1d8 = 0x1000000000000ee;
    FUN_140e87930(&local_1d8,DAT_1419f59c8,0x80000000,&local_d0);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_178 = 0x53f;
    uStack_1cc = 0xf;
    local_1d8 = 0x1000000000000ee;
    FUN_140e87440(&local_1d8,DAT_1419f59c8,0x80000000,&local_140,uVar5 & 0xffffffffffffff00,
                  uVar9 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uStack_1cc = local_134;
    uStack_1d0 = local_138;
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) == 0) {
      local_1d8 = local_140;
    }
    else {
      FUN_1400419b0(&local_1d8,&local_140);
    }
    uVar7 = uStack_1cc;
    local_1c8 = (undefined4)local_1d8;
    uStack_1c4 = local_1d8._4_4_;
    uStack_1c0 = uStack_1d0;
    uStack_1bc = uStack_1cc;
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    FUN_140041b80(&local_e0,&local_1c8);
    if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uStack_1cc = 0xf;
    local_1d8 = 0x1000000000000ee;
    FUN_140e87930(&local_1d8,DAT_141a0a7d8,0x80000000,&local_e0);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
  }
  local_178 = 0x542;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uStack_1cc = 0xf;
  local_1d8 = 0x1000000000000ee;
  FUN_140e87170(&local_1d8,DAT_1419fe0e8,0x80000000,&local_68,param_1,param_2);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = 0xf;
  local_1d8 = 0x1000000000000ee;
  plVar6 = param_1;
  FUN_140e87170(&local_1d8,DAT_1419fe158,0x80000000,&local_78,param_1,param_2);
  uVar7 = (undefined4)((ulonglong)plVar6 >> 0x20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1c8 = (undefined4)local_68;
  uStack_1c4 = local_68._4_4_;
  uStack_1c0 = uStack_60;
  uStack_1bc = uStack_5c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_1c8);
  local_58 = &local_b8;
  local_1c8 = (undefined4)local_78;
  uStack_1c4 = local_78._4_4_;
  uStack_1c0 = uStack_70;
  uStack_1bc = uStack_6c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_1c8);
  local_50 = local_a8;
  local_1c8 = _DAT_141dd4bc8;
  uStack_1c4 = uRam0000000141dd4bcc;
  uStack_1c0 = uRam0000000141dd4bd0;
  uStack_1bc = DAT_141dd4bd4;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_1c8);
  local_48 = local_98;
  uStack_1cc = 0xf;
  local_1d8 = 0x1000000000000b4;
  local_1c8 = 0xb4;
  uStack_1c4 = 0x1000000;
  uStack_1c0 = uStack_1d0;
  uStack_1bc = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_1c8);
  local_40 = local_88;
  ppuVar8 = &local_58;
  uVar5 = CONCAT44(uVar7,DAT_141a0a7c8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b8,4,uVar5,ppuVar8);
  if (puVar3 != &local_150) {
    local_1c8 = *(undefined4 *)puVar3;
    uStack_1c4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1c0 = *(undefined4 *)(puVar3 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
    FUN_140041b80(&local_150,&local_1c8);
  }
  FUN_140e87930(uVar4,DAT_1419ffe18,0x80000000,&local_150);
  local_178 = 0x543;
  uStack_1cc = 0xf;
  local_1d8 = 0x1000000000000ee;
  local_1c8 = 0xee;
  uStack_1c4 = 0x1000000;
  uStack_1c0 = uStack_1d0;
  uStack_1bc = 0xf;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  FUN_140041b80(&local_f0,&local_1c8);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419ffe18,0x80000000,&local_198,uVar5,uVar9);
  FUN_140e87930(&local_198,DAT_141a1f0d0,0x80000000,&local_f0);
  local_178 = 0x544;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uStack_1cc = 0xf;
  local_1d8 = 0x1000000000000ee;
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(&local_1d8,DAT_141a56cd0,0x80000000,&local_160,uVar5,uVar9);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = local_154;
  uStack_1d0 = local_158;
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
    local_1d8 = local_160;
  }
  else {
    FUN_1400419b0(&local_1d8,&local_160);
  }
  uVar7 = uStack_1cc;
  local_1c8 = (undefined4)local_1d8;
  uStack_1c4 = local_1d8._4_4_;
  uStack_1c0 = uStack_1d0;
  uStack_1bc = uStack_1cc;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  FUN_140041b80(&local_100,&local_1c8);
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419ffe18,0x80000000,&local_198,uVar5,uVar9);
  FUN_140e87930(&local_198,DAT_141a56cd0,0x80000000,&local_100);
  local_178 = 0x545;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419ffeb8,0x80000000,&local_170,uVar5,uVar9);
  uStack_1cc = local_164;
  uStack_1d0 = local_168;
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) == 0) {
    local_1d8 = local_170;
  }
  else {
    FUN_1400419b0(&local_1d8,&local_170);
  }
  uVar7 = uStack_1cc;
  local_1c8 = (undefined4)local_1d8;
  uStack_1c4 = local_1d8._4_4_;
  uStack_1c0 = uStack_1d0;
  uStack_1bc = uStack_1cc;
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  FUN_140041b80(&local_110,&local_1c8);
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140e87440(uVar4,DAT_1419ffe18,0x80000000,&local_198,uVar5 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  FUN_140e87930(&local_198,DAT_1419ffc48,0x80000000,&local_110);
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}

