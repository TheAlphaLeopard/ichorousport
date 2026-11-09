// gml_Script____struct___386_gml_Object_oBossSplit_Create_0 @ 0x1407e6f80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___386_gml_Object_oBossSplit_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *local_res8;
  undefined8 local_res10;
  uint local_res18;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined1 *local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 **local_158;
  longlong **local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 *local_88 [6];
  undefined1 *local_58 [4];
  
  local_res18 = 0;
  local_1a0 = "gml_Script_anon@10592@___struct___386@gml_Object_oBossSplit_Create_0";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0x1d7;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_f8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = (undefined1 *)0x0;
  local_1fc = 0;
  local_208 = 0;
  local_134 = 0;
  local_140 = 0;
  local_124 = 0;
  local_130 = 0;
  local_174 = 0;
  local_180 = 0;
  local_184 = 0;
  local_190 = 0;
  local_114 = 0;
  local_120 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_198 = 0x1d9;
  puVar2 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
  FUN_140e609c0(local_res8);
  uVar8 = 0;
  puVar3 = (undefined8 *)gml_Script_FracPos(local_res8,local_res10,&local_208,0,0);
  if (puVar3 != puVar2) {
    local_218 = *puVar3;
    uStack_210 = *(undefined4 *)(puVar3 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_218);
  }
  FUN_140e60910(1);
  local_198 = 0x1db;
  uStack_20c = 0xf;
  local_218 = 0x1000001000002e0;
  local_228 = 0x1000001000002e0;
  uStack_220 = uStack_210;
  uStack_21c = 0xf;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_228);
  FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1b8);
  local_198 = 0x1dc;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  puVar2 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fdaa8);
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  if (puVar2 != &local_f8) {
    local_218 = *puVar2;
    uStack_210 = *(undefined4 *)(puVar2 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_218);
  }
  local_88[0] = &local_f8;
  uVar7 = CONCAT44(uVar8,DAT_1419f5e98);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_208,1,uVar7,local_88);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_21c = 0;
  local_228 = 0;
  iVar1 = FUN_140e851f0(uVar5,&local_228,DAT_141955260,0);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if (iVar1 == 0) {
    local_170 = &local_180;
    local_168 = &local_190;
    local_160 = &local_f8;
    local_158 = local_88;
    local_150 = &local_res8;
    local_148 = &local_res10;
    local_218 = FUN_1407e7640(&local_170);
    uStack_20c = 0;
    puVar2 = &local_218;
    uVar6 = 1;
    local_res18 = 1;
  }
  else {
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    local_228 = CONCAT44(uRam0000000141dc6a24,_DAT_141dc6a20);
    uStack_220 = uRam0000000141dc6a28;
    uStack_21c = uRam0000000141dc6a2c;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_228);
    local_58[0] = local_98;
    puVar2 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_1f8,1,CONCAT44(uVar8,DAT_141a0a0d8),
                           local_58);
    uStack_21c = *(undefined4 *)((longlong)puVar2 + 0xc);
    uStack_220 = *(undefined4 *)(puVar2 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_228 = *puVar2;
    }
    else {
      FUN_1400419b0(&local_228,puVar2);
    }
    puVar2 = &local_228;
    uVar6 = 6;
    local_res18 = 6;
  }
  uVar8 = uStack_20c;
  local_110 = *(undefined4 *)puVar2;
  uStack_10c = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_108 = *(undefined4 *)(puVar2 + 1);
  uStack_104 = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_110);
  if ((uVar6 & 2) != 0) {
    uVar6 = uVar6 & 0xfffffffd;
    local_res18 = uVar6;
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
  }
  if (((uVar6 & 1) != 0) && ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_218);
  }
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_1c8);
  local_198 = 0x1dd;
  uVar4 = FUN_140e79480(0);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1cc = 0;
  local_1d8 = uVar4;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_141a1eed0,0x80000000,&local_1d8);
  local_198 = 0x1de;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1dc = 0;
  local_1e8 = &DAT_bff0000000000000;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_141a067b8,0x80000000,&local_1e8);
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}

