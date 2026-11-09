// gml_Object_oCheckEpilepsy_Create_0 @ 0x1408a0dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oCheckEpilepsy_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_70 = "gml_Object_oCheckBox_Step_0";
  local_68 = 0;
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_60,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_68 = 4;
  local_c8 = (longlong *)CONCAT44(uRam00000001419e9534,_DAT_1419e9530);
  uStack_c0 = uRam00000001419e9538;
  uStack_bc = uRam00000001419e953c;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_c8);
  local_30 = local_60;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar5,DAT_141a44e08),&local_30);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a47718);
    uVar6 = 0;
    uVar3 = FUN_140e63610(param_1,param_2,&local_b8,0,uVar4,0);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      uStack_bc = 6;
      local_c8 = param_1;
      FUN_140e87440(&local_c8,DAT_141a0a7e8,0,&local_98,uVar4 & 0xffffffffffffff00,
                    uVar6 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      uStack_bc = 0;
      local_c8 = (longlong *)&DAT_bff0000000000000;
      iVar2 = FUN_140e851f0(&local_98,&local_c8,DAT_141955260,0);
      if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if (iVar2 == 0) {
        local_68 = 6;
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        local_9c = 0;
        local_a8 = 0x402e000000000000;
        FUN_140e86fa0(param_1,DAT_141a0a7e8,0,&local_a8);
        local_68 = 7;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0;
        local_cc = 5;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a47748);
        FUN_140e63610(param_1,param_2,&local_d8,0,uVar3,0);
        uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
        local_68 = 8;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0;
        local_cc = 5;
        uStack_bc = 0xf;
        local_c8 = (longlong *)0x1000002000000ba;
        local_88 = 0xba;
        uStack_84 = 0x1000002;
        uStack_80 = uStack_c0;
        uStack_7c = 0xf;
        if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_60);
        }
        FUN_140041b80(local_60,&local_88);
        local_30 = local_60;
        local_88 = _DAT_1419e9520;
        uStack_84 = uRam00000001419e9524;
        uStack_80 = uRam00000001419e9528;
        uStack_7c = uRam00000001419e952c;
        if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_50);
        }
        FUN_140041b80(local_50,&local_88);
        local_28 = local_50;
        local_88 = _DAT_1419df7a0;
        uStack_84 = uRam00000001419df7a4;
        uStack_80 = uRam00000001419df7a8;
        uStack_7c = uRam00000001419df7ac;
        if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_40);
        }
        FUN_140041b80(local_40,&local_88);
        local_20 = local_40;
        FUN_140e634e0(param_1,param_2,&local_d8,3,CONCAT44(uVar5,DAT_141a0a2e8),&local_30);
      }
    }
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return;
}

