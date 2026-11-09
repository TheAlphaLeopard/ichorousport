// gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback @ 0x1400d62a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *local_res18;
  undefined4 local_res20;
  code *pcVar6;
  undefined4 uVar7;
  double local_e8;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  double local_70;
  undefined4 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_res20 = 0;
  local_90 = "gml_Script___InputTrace";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 3;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_b8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_74 = 0xffffff;
  local_80 = 0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_cc = 0;
  local_d8 = 0;
  local_64 = 0;
  local_70 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 5;
  local_c8 = _DAT_141dcb128;
  uStack_c0 = uRam0000000141dcb130;
  FUN_140041b80(&local_80,&local_c8);
  local_88 = 6;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0.0;
  local_88 = 7;
  iVar1 = FUN_140e4a740(&local_70);
  uVar7 = (undefined4)((ulonglong)pcVar6 >> 0x20);
  do {
    if (iVar1 < 1) {
      local_88 = 0xd;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      local_9c = DAT_141dcb144;
      local_a0 = DAT_141dcb140;
      if ((1 << ((byte)DAT_141dcb144 & 0x1f) & 0x46U) == 0) {
        local_a8 = DAT_141dcb138;
      }
      else {
        FUN_1400419b0(&local_a8,&DAT_141dcb138);
      }
      uStack_c0 = CONCAT44(local_9c,local_a0);
      uVar3 = 1 << ((byte)local_9c & 0x1f) & 0x46;
      if (uVar3 == 0) {
        local_c8 = local_a8;
      }
      else {
        FUN_1400419b0(&local_c8,&local_a8);
      }
      local_res20 = 1;
      FUN_1400460e0(&local_c8,&local_80);
      local_58 = local_c8;
      uStack_50 = uStack_c0;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_58);
      if ((1 << ((byte)((ulonglong)uStack_c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if (uVar3 != 0) {
        FUN_140041a50(&local_a8);
      }
      local_res18 = &local_b8;
      FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar7,DAT_141a03478),&local_res18);
      if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_70);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      _eh_vector_destructor_iterator_(&local_b8,0x10,1,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_98;
      return param_3;
    }
    uVar7 = (undefined4)((ulonglong)pcVar6 >> 0x20);
    iVar1 = iVar1 + -1;
    local_88 = 9;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    iVar2 = FUN_140e4a740(&local_e8);
    if (iVar2 < param_4) {
      puVar5 = *(undefined8 **)(param_5 + (longlong)iVar2 * 8);
      if (puVar5 != &local_b8) goto LAB_1400d643a;
    }
    else {
      puVar5 = &DAT_1419df7b0;
LAB_1400d643a:
      local_c8 = *puVar5;
      uStack_c0 = puVar5[1];
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_c8);
    }
    local_res18 = &local_b8;
    pcVar6 = (code *)CONCAT44(uVar7,DAT_1419fcb18);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_d8,1,pcVar6,&local_res18);
    FUN_1400460e0(&local_80,uVar4);
    local_88 = 10;
    uVar3 = local_dc & 0xffffff;
    if (uVar3 == 0) {
LAB_1400d64fa:
      local_e8 = local_e8 + 1.0;
    }
    else {
      if (uVar3 == 1) {
        local_e8 = (double)FUN_140e4b060(&local_e8);
        local_dc = 0;
        goto LAB_1400d64fa;
      }
      if (uVar3 == 7) {
        local_e8 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_e8 = (double)((longlong)local_e8 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_dc = 0;
          goto LAB_1400d64fa;
        }
        FUN_140042910(&DAT_14172c3d8,&local_e8,&local_e8);
      }
    }
    uVar7 = (undefined4)((ulonglong)pcVar6 >> 0x20);
  } while( true );
}

