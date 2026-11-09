// gml_Script____struct___34____struct___33___ol_cache___scr_outline @ 0x140110450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___34____struct___33___ol_cache___scr_outline
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint **ppuVar9;
  undefined8 local_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  uint local_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  uint local_150 [3];
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  uint local_e8 [3];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  uint local_a8 [3];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  uint *local_48;
  undefined1 *local_40;
  
  local_160 = "gml_GlobalScript___scr_outline";
  local_158 = 0;
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_e8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_144 = 0xffffff;
  local_150[0] = 0;
  local_150[1] = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04678);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script___outline_start,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x2e;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar8 = 0;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_188,0,CONCAT44(uVar5,DAT_141a04438),0);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_158 = 0x37;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uVar6 = 0;
    uVar3 = gml_Script___outline_start(param_1,param_2,&local_178,0,0);
    uVar8 = uVar8 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a04928,0x80000000,&local_120,uVar6,uVar8);
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(&local_120,DAT_141a04488,0x80000000,&local_88,uVar6,uVar8 & 0xffffffffffffff00);
    uVar5 = (undefined4)(uVar6 >> 0x20);
    local_198 = (uint)local_88;
    uStack_194 = local_88._4_4_;
    uStack_190 = uStack_80;
    uStack_18c = uStack_7c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_198);
    local_68 = local_e8;
    FUN_140e634e0(param_1,param_2,&local_188,1,CONCAT44(uVar5,DAT_141a03478),&local_68);
    local_158 = 0x38;
    local_1a8 = 0x3ff0000000000000;
    uStack_19c = 0xd;
    local_198 = 0;
    uStack_194 = 0x3ff00000;
    uStack_190 = uStack_1a0;
    uStack_18c = 0xd;
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    FUN_140041b80(&local_140,&local_198);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uVar7 = 0;
    uVar3 = gml_Script___outline_start(param_1,param_2,&local_188,0,0);
    puVar2 = &local_140;
    uVar5 = DAT_141a04958;
  }
  else {
    local_158 = 0x2f;
    local_1a8 = 0x3ff0000000000000;
    uStack_19c = 0xd;
    local_198 = 0;
    uStack_194 = 0x3ff00000;
    uStack_190 = uStack_1a0;
    uStack_18c = 0xd;
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    FUN_140041b80(&local_100,&local_198);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uVar5 = 0;
    uVar3 = gml_Script___outline_start(param_1,param_2,&local_178,0,0);
    FUN_140e87930(uVar3,DAT_141a04708,0x80000000,&local_100);
    local_158 = 0x30;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uStack_19c = 0xf;
    local_1a8 = 0x100000800000001;
    local_198 = 1;
    uStack_194 = 0x1000008;
    uStack_190 = uStack_1a0;
    uStack_18c = 0xf;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_198);
    local_68 = local_e8;
    ppuVar9 = &local_68;
    uVar3 = FUN_140e634e0(param_1,param_2,&local_188,1,CONCAT44(uVar5,DAT_141a04428),ppuVar9);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      local_158 = 0x33;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_188 = 0;
      local_180 = 0;
      local_17c = 5;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      uVar8 = 0;
      uVar3 = gml_Script___outline_start(param_1,param_2,&local_178,0,0);
      uVar6 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(uVar3,DAT_141a04928,0x80000000,&local_120,uVar8,uVar6);
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_120,DAT_141a048c8,0x80000000,&local_78,uVar8,uVar6 & 0xffffffffffffff00);
      uVar5 = (undefined4)(uVar8 >> 0x20);
      local_198 = (uint)local_78;
      uStack_194 = local_78._4_4_;
      uStack_190 = uStack_70;
      uStack_18c = uStack_6c;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_198);
      local_68 = local_e8;
      FUN_140e634e0(param_1,param_2,&local_188,1,CONCAT44(uVar5,DAT_141a03478),&local_68);
      local_158 = 0x34;
      local_1a8 = 0x3ff0000000000000;
      uStack_19c = 0xd;
      local_198 = 0;
      uStack_194 = 0x3ff00000;
      uStack_190 = uStack_1a0;
      uStack_18c = 0xd;
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      FUN_140041b80(&local_130,&local_198);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_188 = 0;
      local_180 = 0;
      local_17c = 5;
      uVar7 = 0;
      uVar3 = gml_Script___outline_start(param_1,param_2,&local_188,0,0);
      puVar2 = &local_130;
      uVar5 = DAT_141a04748;
    }
    else {
      local_158 = 0x31;
      local_1a8 = 0x3ff0000000000000;
      uStack_19c = 0xd;
      local_198 = 0;
      uStack_194 = 0x3ff00000;
      uStack_190 = uStack_1a0;
      uStack_18c = 0xd;
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      FUN_140041b80(&local_110,&local_198);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      uVar7 = 0;
      uVar3 = gml_Script___outline_start(param_1,param_2,&local_178,0,0);
      puVar2 = &local_110;
      uVar5 = DAT_141a048b8;
    }
  }
  FUN_140e87930(uVar3,uVar5,0x80000000,puVar2);
  local_158 = 0x40;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04698);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script___outline_set_uniforms,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x4c;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04a38);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script____struct___37___outline_surface_create___scr_outline,param_1)
  ;
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x5b;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04878);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script____struct___38___outline_surface_create___scr_outline,param_1)
  ;
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x6e;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04578);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,FUN_1400ef6a0,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x7b;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a046f8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,FUN_1400effd0,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x99;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04968);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script___outline_gc,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0xbc;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  local_198 = _DAT_141dc6190;
  uStack_194 = uRam0000000141dc6194;
  uStack_190 = uRam0000000141dc6198;
  uStack_18c = uRam0000000141dc619c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_198);
  local_68 = local_e8;
  local_198 = _DAT_1419e1d20;
  uStack_194 = uRam00000001419e1d24;
  uStack_190 = uRam00000001419e1d28;
  uStack_18c = uRam00000001419e1d2c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_198);
  local_198 = _DAT_1419e1d20;
  uStack_194 = uRam00000001419e1d24;
  uStack_190 = uRam00000001419e1d28;
  uStack_18c = uRam00000001419e1d2c;
  local_60 = local_d8;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_198);
  local_58 = local_c8;
  local_198 = DAT_141a04508 & 0xffffff;
  uStack_194 = (int)(DAT_141a04508 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_194 == 0xf) {
    uStack_194 = 0x4000004;
  }
  else {
    uStack_194 = uStack_194 | 0x1000000;
  }
  uStack_19c = 0xf;
  local_1a8 = CONCAT44(uStack_194,DAT_141a04508) & 0xffffffff00ffffff;
  uStack_190 = uStack_1a0;
  uStack_18c = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_198);
  local_50 = local_b8;
  puVar4 = (uint *)FUN_140e8da20(&local_178,param_1,0);
  if (puVar4 != local_a8) {
    local_198 = *puVar4;
    uStack_194 = puVar4[1];
    uStack_190 = puVar4[2];
    uStack_18c = puVar4[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_198);
  }
  local_48 = local_a8;
  local_198 = _DAT_1419e1d40;
  uStack_194 = uRam00000001419e1d44;
  uStack_190 = uRam00000001419e1d48;
  uStack_18c = uRam00000001419e1d4c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_198);
  local_40 = local_98;
  uVar3 = CONCAT44(uVar7,DAT_141a02df8);
  puVar4 = (uint *)FUN_140e634e0(param_1,param_2,&local_188,6,uVar3,&local_68);
  uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar4 != local_150) {
    local_198 = *puVar4;
    uStack_194 = puVar4[1];
    uStack_190 = puVar4[2];
    uStack_18c = puVar4[3];
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_150);
    }
    FUN_140041b80(local_150,&local_198);
  }
  local_158 = 0xbd;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  local_68 = local_150;
  FUN_140e634e0(param_1,param_2,&local_188,1,CONCAT44(uVar5,DAT_141a02f28),&local_68);
  local_158 = 0xc4;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04728);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_ol_config,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0xd0;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a047d8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_outline_bake_sprite_text,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0xe3;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a045b8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_outline_bake_sprite_text_ext,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0xfb;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a045d8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_outline_draw_text,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x14a;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04858);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_outline_draw_text_ext,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x198;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04688);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_outline_draw_text_transformed,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x1c4;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04468);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,FUN_1400fb430,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x1f2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04868);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,FUN_1400fd500,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x221;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04568);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,FUN_1400ff1a0,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x250;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a049a8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_outline_draw_text_transformed_color,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x283;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a044f8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_outline_draw_text_ext_transformed_color,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x2b4;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a044c8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_outline_set_sprite,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x2e9;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04738);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_outline_bake_sprite,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x317;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a045f8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_outline_draw_sprite,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x32d;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a046e8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_outline_draw_sprite_ext,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x368;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04a28);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_outline_set_surface,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x379;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a044e8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_outline_draw_surface,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x386;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04b08);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_outline_draw_surface_ext,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x39c;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04618);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,gml_Script_outline_draw_surface_stretched,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x3ac;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a049f8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,FUN_14010f4a0,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_158 = 0x3b9;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04a68);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1a8,FUN_14010fd00,param_1);
  if (&local_1a8 != puVar2) {
    local_198 = (uint)local_1a8;
    uStack_194 = local_1a8._4_4_;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_198);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_150);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}

